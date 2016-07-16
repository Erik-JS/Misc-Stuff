/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp4_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class sfxgamecontentdlc_con_mp4.SFXCharacterClassMP_Vanguard_Volus
// 0x0000 (0x01CD - 0x01CD)
class USFXCharacterClassMP_Vanguard_Volus : public USFXCharacterClass_ContentMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135927 ];

		return pClassPointer;
	};

};

UClass* USFXCharacterClassMP_Vanguard_Volus::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost
// 0x00C7 (0x075C - 0x0695)
class USFXPowerCustomActionMP_ShieldBoost : public Usfxpowercustomaction
{
public:
	struct FPowerData                                  ShieldBoost;                                      		// 0x0698 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  RestorePerSecond;                                 		// 0x06C8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  RestoreDuration;                                  		// 0x06F8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              Evolve_ImpactRadius;                              		// 0x0728 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldBoost1;                              		// 0x072C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RechargeSpeed;                             		// 0x0730 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldRegen;                               		// 0x0734 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldRegenDuration;                       		// 0x0738 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldBoost2;                              		// 0x073C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageReduction;                           		// 0x0740 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageReductionDuration;                   		// 0x0744 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MaxDamageReduction;                        		// 0x0748 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RestoreDurationBonus;                      		// 0x074C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HiddenImmunityDuration;                           		// 0x0750 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_HealCrust;                                     		// 0x0754 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_HealBubble;                                    		// 0x0758 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135930 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReleaseBuffPower ( );
};

UClass* USFXPowerCustomActionMP_ShieldBoost::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs
// 0x00E3 (0x0778 - 0x0695)
class USFXPowerCustomActionMP_BioticOrbs : public Usfxpowercustomaction
{
public:
	struct FPowerData                                  NumberOfOrbs;                                     		// 0x0698 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  CooldownPerOrb;                                   		// 0x06C8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class URvrClientEffectInterface* >         CE_OrbEffects;                                    		// 0x06F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGuid >                             OrbGuids;                                         		// 0x0704 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBodyStance                                 SummonBodyStance;                                 		// 0x0710 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       DamageDebuffUniqueName;                           		// 0x071C (0x0008) [0x0000000000000000]              
	float                                              Evolve_DamageBonus1;                              		// 0x0724 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ImpactRadiusBonus;                         		// 0x0728 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus2;                              		// 0x072C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x0730 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageDebuff;                              		// 0x0734 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageDebuffDuration;                      		// 0x0738 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MaxDebuffAmount;                           		// 0x073C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_OrbIncrease;                               		// 0x0740 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CurrentOrbCount;                                  		// 0x0744 (0x0004) [0x0000000000000000]              
	float                                              SpawnThreeOrbDelay;                               		// 0x0748 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnFourOrbDelay;                                		// 0x074C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumOrbsYetToSpawn;                                		// 0x0750 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    SummonAnimSet;                                    		// 0x0754 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 LaunchOrbPlayerSound;                             		// 0x0758 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 LaunchOrbNonPlayerSound;                          		// 0x075C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 SpawnOrbPlayerSound;                              		// 0x0760 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 SpawnOrbNonPlayerSound;                           		// 0x0764 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 LoopStartPlayerSound;                             		// 0x0768 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 LoopStartNonPlayerSound;                          		// 0x076C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 LoopStopPlayerSound;                              		// 0x0770 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 LoopStopNonPlayerSound;                           		// 0x0774 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135931 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
	void OnOwnerDestroyed ( );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void DoJoinInProgress ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void StartPowerCooldown ( );
	void RemoveAllOrbEffects ( );
	void RemoveOrbEffect ( );
	void AddOrbEffects ( );
	void ReleasePower_CooldownBonus ( );
	void ReleasePower_ThrowOrb ( int expectedCurrentOrbCount );
	void ReleasePower_NewOrbs ( );
	void ReleasePower ( );
	void StartCustomAction ( );
	bool CanUsePower ( class AActor* oTarget );
	void OnPowerReleased ( class Usfxpowercustomaction* oPower );
	void OnPowersLoaded ( );
};

UClass* USFXPowerCustomActionMP_BioticOrbs::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_VolusPassive
// 0x0004 (0x0754 - 0x0750)
class USFXPowerCustomActionMP_VolusPassive : public Usfxpowercustomactionmp_passivebase
{
public:
	float                                              Evolve_ShieldBoostBonus;                          		// 0x0750 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135932 ];

		return pClassPointer;
	};

	void ApplyGlobalBonus ( );
};

UClass* USFXPowerCustomActionMP_VolusPassive::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_VolusMeleePassive
// 0x0000 (0x08D4 - 0x08D4)
class USFXPowerCustomActionMP_VolusMeleePassive : public USFXPowerCustomActionMP_MeleePassiveBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135933 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyGlobalBonus ( );
};

UClass* USFXPowerCustomActionMP_VolusMeleePassive::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeLeft
// 0x0006 (0x00F4 - 0x00EE)
class USFXCustomAction_VolusEvadeLeft : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135935 ];

		return pClassPointer;
	};

	void RollOverride ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXCustomAction_VolusEvadeLeft::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeRight
// 0x0006 (0x00F4 - 0x00EE)
class USFXCustomAction_VolusEvadeRight : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135936 ];

		return pClassPointer;
	};

	void RollOverride ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXCustomAction_VolusEvadeRight::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward
// 0x0016 (0x0104 - 0x00EE)
class USFXCustomAction_VolusEvadeForward : public USFXCustomAction_PlayerEvadeBase
{
public:
	struct FVector                                     MoveOffset;                                       		// 0x00F0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MoveDist;                                         		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHitWallEnabled : 1;                              		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135937 ];

		return pClassPointer;
	};

	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void RollOverride ( );
	void StopCustomAction ( );
	void EndThisCustomAction ( );
	void SyncRotation ( float Alpha, struct FVector ToEnd2D );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXCustomAction_VolusEvadeForward::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeBackwards
// 0x0006 (0x00F4 - 0x00EE)
class USFXCustomAction_VolusEvadeBackwards : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135938 ];

		return pClassPointer;
	};

	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void RollOverride ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXCustomAction_VolusEvadeBackwards::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck
// 0x0052 (0x0150 - 0x00FE)
class USFXCustomAction_VolusDuck : public USFXCustomAction_Loop
{
public:
	TArray< class AActor* >                            AffectedActors;                                   		// 0x0100 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UClass*                                      DamageType;                                       		// 0x010C (0x0004) [0x0000000000000000]              
	struct FAreaEffectParameters                       MeleeImpactParameters;                            		// 0x0110 (0x0020) [0x0000000000000000]              
	class USFXAnimSetCookSpec*                         AnimInfo;                                         		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActionStartTime;                                  		// 0x0134 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXPowerCustomAction_MeleePassivePower*     Power;                                            		// 0x0138 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShieldRegen;                                      		// 0x013C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ImmunityWindow;                                   		// 0x0140 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class UWwiseEvent*                                 PlayerChargeEndSound;                             		// 0x0144 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 NonPlayerChargeEndSound;                          		// 0x0148 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReleasedMeleeEarly : 1;                          		// 0x014C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bLoopStarted : 1;                                 		// 0x014C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135939 ];

		return pClassPointer;
	};

	void RegenShields ( );
	void InterruptThisCustomAction ( );
	void ReleaseMelee ( );
	void EndThisCustomAction ( );
	void StopCustomAction ( );
	void OnTimelineImpact ( class AActor* Target );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXCustomAction_VolusDuck::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusCloakEscape
// 0x0032 (0x0120 - 0x00EE)
class USFXCustomAction_VolusCloakEscape : public USFXCustomAction_SingleAnim
{
public:
	struct FGuid                                       OmniToolGuid;                                     		// 0x00F0 (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_OmniTool;                                      		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              OmniToolDuration;                                 		// 0x0104 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CloakDuration;                                    		// 0x0108 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CloakCooldown;                                    		// 0x010C (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UWwiseEvent*                                 StartCloakPlayerSound;                            		// 0x0110 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 StartCloakNonPlayerSound;                         		// 0x0114 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 StopCloakPlayerSound;                             		// 0x0118 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 StopCloakNonPlayerSound;                          		// 0x011C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135940 ];

		return pClassPointer;
	};

	void StopCustomAction ( );
	void CloakEnded ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXCustomAction_VolusCloakEscape::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXDamageType_VolusHeavyMelee
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_VolusHeavyMelee : public USFXDamageType_HeavyMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136025 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_VolusHeavyMelee::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXDamageType_BioticOrbs
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_BioticOrbs : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136102 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_BioticOrbs::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXGameEffect_ShieldBoostRestore
// 0x001A (0x007C - 0x0062)
class USFXGameEffect_ShieldBoostRestore : public USFXGameEffect
{
public:
	float                                              RestoreFrequency;                                 		// 0x0064 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class Asfxpawn*                                    Pawn;                                             		// 0x0068 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 StartLoopPlayer;                                  		// 0x006C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 StopLoopPlayer;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 StartLoopNonPlayer;                               		// 0x0074 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 StopLoopNonPlayer;                                		// 0x0078 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136107 ];

		return pClassPointer;
	};

	void eventOnRemoved ( );
	void RestoreShields ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_ShieldBoostRestore::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXPawn_PlayerMP_Vanguard_Volus
// 0x0000 (0x1288 - 0x1288)
class ASFXPawn_PlayerMP_Vanguard_Volus : public ASFXPawn_PlayerMP_Vanguard
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136152 ];

		return pClassPointer;
	};

	void HealthFailsafe ( );
	void RagdollFailsafe ( );
	void ResetSyncMovementFailsafeInfo ( );
	void ProcessSyncMovementFailsafe ( );
	void Tick ( float DeltaTime );
	bool eventCanDoCustomAction ( int CAction, class APawn* Sync, unsigned long bForced, int PowerCustomAction );
	bool ShouldShowHUDGrenadeCounter ( );
	void UpdateGameEffects ( );
	struct FName GetUIAppearanceTag ( );
	void Destroyed ( );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetExecutioner ( class APawn* Killer );
	void AttemptKillingBlow ( class APawn* Killer );
	void UpdateMappedPowerDisplay ( );
	bool CanPlayDeathEffect ( );
	void UseReviveConsumablePower ( );
	void AutoMapPC ( );
	void AutoMapXbox ( );
	bool ShouldTossWeapon ( class ASFXWeapon* ChkWeapon, class ASFXWeapon* NewWeapon );
	bool InCombat ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void LoadWeaponModData ( );
	void LoadPowerData ( );
	bool IsTestFrameworkSetupComplete ( );
	void LoadWeapons ( );
	void CreateWeapons ( class USFXLoadoutData* ChkLoadout, unsigned long bForceFromEngineLoadout );
	struct FString GetFullName ( );
	void DeferredSetRichPresence ( );
	void StopLoadingMovie ( );
	void DeferredPostBeginPlay ( );
	void PostBeginPlay ( );
	void ServerPermaDeath ( );
	void PermaDeath ( );
	void StartSpectatorCam ( );
	void PermaDeadChanged ( );
	bool eventResurrect ( float PercentOfHealthRegained, unsigned long bIsInstantaneous );
	void PreClientTravel ( );
	bool IsReadyForExecution ( class Asfxpawn* Killer );
	void IsDeadUpdated ( );
	void StartRevive ( class ASFXPawn_PlayerParty* TargetPawn );
	void FinalizeProcessFellOutOfWorld ( );
	void ServerFellOutOfWorldImpl ( );
	void eventFellOutOfWorldImpl ( );
	void BioBaseRemovedFromWorld ( );
	void OutsideWorldBounds ( );
	void FellOutOfWorld ( class UClass* dmgType );
	void ApplyCustomizationToActor ( class AActor* InTarget, class USFXCustomizationInstance* InSettings, int UIWorldConfigFlags );
	void GetMPAppearanceVariables ( int* Tint1, int* Tint2, int* Pattern, int* PatternColor, int* Phong, int* Emissive, int* SkinTone );
	void SetMPAppearanceVariables ( int Tint1, int Tint2, int Pattern, int PatternColor, int Phong, int Emissive, int SkinTone );
	void UpdateAppearance ( );
	void CopyPawnAppearance ( class ABioPawn* SourcePawn );
	void CheckEnterCombat ( );
	void PlayerRevivedMessage ( );
	void PlayerKilledMessage ( );
	void eventReplicatedEvent ( struct FName VarName );
	struct FString GetActorGameName ( );
};

UClass* ASFXPawn_PlayerMP_Vanguard_Volus::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXProjectile_PowerCustomAction_BioticOrbs
// 0x0000 (0x048C - 0x048C)
class ASFXProjectile_PowerCustomAction_BioticOrbs : public ASFXProjectile_PowerCustomAction_SuperSeeking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136277 ];

		return pClassPointer;
	};

	void InitializeRotation ( class APawn* oCasterPawn );
	void TickAimRotation ( float DeltaTime, struct FVector SeekVector );
};

UClass* ASFXProjectile_PowerCustomAction_BioticOrbs::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif