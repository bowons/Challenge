// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterBase.h"
#include "EnhancedInputComponent.h"
#include "Animation/AnimMontage.h"
#include "Components/ComboManagerComponent.h"
#include "GAS/Abilities/GA_Blocking.h"

// Sets default values
AMyCharacterBase::AMyCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    AbilitySystemComponent->SetIsReplicated(true);
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

    AttributeSet = CreateDefaultSubobject<UMyAttributeSet>(TEXT("AttributeSet"));
}

UAbilitySystemComponent* AMyCharacterBase::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

float AMyCharacterBase::GetHealth() const
{
    if (AttributeSet)
    {
        return AttributeSet->GetHealth();
    }
    return 0.0f;
}

float AMyCharacterBase::GetMaxHealth() const
{
    if (AttributeSet)
    {
        return AttributeSet->GetMaxHealth();
    }
    return 0.0f;
}

float AMyCharacterBase::GetStamina() const
{
    if (AttributeSet)
    {
        return AttributeSet->GetStamina();
    }
    return 0.0f;
}

float AMyCharacterBase::GetMaxStamina() const
{
    if (AttributeSet)
    {
        return AttributeSet->GetMaxStamina();
    }
    return 0.0f;
}

// === BeginPlay 수정 ===
void AMyCharacterBase::BeginPlay()
{
    Super::BeginPlay();

    // ASC 초기화
    InitializeAbilitySystem();

    // 추가: Ability 부여
    GiveDefaultAbilities();
}

// === 추가 ===
void AMyCharacterBase::GiveDefaultAbilities()
{
    if (!AbilitySystemComponent || !HasAuthority())
    {
        return;
    }

    // DefaultAbilities 배열 순회하며 부여
    for (TSubclassOf<UGameplayAbility>& AbilityClass : DefaultAbilities)
    {
        if (AbilityClass)
        {
            // Ability Spec 생성
            // - Level 1
            // - InputID 없음 (나중에 Input Binding에서 설정)
            // - SourceObject: this (이 캐릭터)
            FGameplayAbilitySpec AbilitySpec(AbilityClass, 1, INDEX_NONE, this);
            // ASC에 Ability 부여
            AbilitySystemComponent->GiveAbility(AbilitySpec);
        }
    }

    // PassiveAbilities - 자동 활성화
    for (TSubclassOf<UGameplayAbility>& AbilityClass : PassiveAbilities)
    {
        if (AbilityClass)
        {
            
            FGameplayAbilitySpec AbilitySpec(AbilityClass, 1, INDEX_NONE, this);
            FGameplayAbilitySpecHandle Handle = AbilitySystemComponent->GiveAbility(AbilitySpec);
            AbilitySystemComponent->TryActivateAbility(Handle);
        }
    }
}

void AMyCharacterBase::InitializeAbilitySystem()
{
    if (AbilitySystemComponent)
    {
        // Owner Actor와 Avatar Actor 설정
        // Onwer -> 실제로 소유하는 Actor (예: APlayerController)
        // Avatar -> 능력을 실행하는 Actor (예: AMyCharacterBase)
        AbilitySystemComponent->InitAbilityActorInfo(this, this);
    }
}

void AMyCharacterBase::ApplyDamage(float DamageAmount)
{
    if (AttributeSet)
    {
        float NewHealth = AttributeSet->GetHealth() - DamageAmount;
        AttributeSet->SetHealth(NewHealth);
    }
}

void AMyCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        /*if (EnhancedInput)
        {
            EnhancedInput->BindAction(AttackAction, ETriggerEvent::Triggered, this, &AMyCharacterBase::Attack);
        }*/

        // 공격 Input → OnAttack() 바인딩
        if (IA_Attack)
        {
            EnhancedInput->BindAction(IA_Attack, ETriggerEvent::Started, this, &AMyCharacterBase::OnAttack);
        }

        if (IA_HeavyAttack)
        {
            EnhancedInput->BindAction(IA_HeavyAttack, ETriggerEvent::Started, this, &AMyCharacterBase::OnHeavyAttack);
        }

        if (IA_Block)
        {
            EnhancedInput->BindAction(IA_Block, ETriggerEvent::Started, this, &AMyCharacterBase::OnBlockStart);
            EnhancedInput->BindAction(IA_Block, ETriggerEvent::Completed, this, &AMyCharacterBase::OnBlockCompleted);
        }
    }
}

void AMyCharacterBase::Attack()
{
    if (AttackMontage)
    {
        PlayAnimMontage(AttackMontage);
    }
}

void AMyCharacterBase::OnAttack()
{
    // // ASC 확인
    // if (!AbilitySystemComponent)
    // {
    //     return;
    // }
    //
    // // Ability Tag로 활성화
    // FGameplayTagContainer AbilityTags;
    // AbilityTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Attack.Light")));
    //
    // // Tag가 일치하는 Ability 활성화 시도
    // AbilitySystemComponent->TryActivateAbilitiesByTag(AbilityTags);
    if (UComboManagerComponent* ComboMgr = FindComponentByClass<UComboManagerComponent>())
    {
        ComboMgr->RequestAttack();
    }
}

void AMyCharacterBase::OnHeavyAttack()
{
    if (!AbilitySystemComponent)
    {
        return;
    }

    FGameplayTagContainer AbilityTags;
    AbilityTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Attack.Heavy")));

    AbilitySystemComponent->TryActivateAbilitiesByTag(AbilityTags);
}

void AMyCharacterBase::OnBlockStart()
{
    if (!AbilitySystemComponent) return;

    FGameplayTagContainer AbilityTags;
    AbilityTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Block")));

    bool bSuccess = AbilitySystemComponent->TryActivateAbilitiesByTag(AbilityTags);
    UE_LOG(LogTemp, Log, TEXT("[Block] TryActivate: %s"), bSuccess ? TEXT("Success") : TEXT("Failed"));
}

void AMyCharacterBase::OnBlockCompleted()
{
    if (!AbilitySystemComponent) return;

    // State.Blocking Tag가 있는지 체크 (방어 중인지)
    if (!AbilitySystemComponent->HasMatchingGameplayTag(
        FGameplayTag::RequestGameplayTag(FName("State.Blocking"))))
    {
        return;  // 방어 중 아님
    }

    // 활성화된 Block Ability 찾아서 ReleaseBlock 호출
    for (FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
    {
        if (Spec.IsActive() && Spec.Ability->AbilityTags.HasTag(
            FGameplayTag::RequestGameplayTag(FName("Ability.Block"))))
        {
            if (UGA_Blocking* BlockAbility = Cast<UGA_Blocking>(Spec.GetPrimaryInstance()))
            {
                BlockAbility->ReleaseBlock();
            }
            break;
        }
    }
}
