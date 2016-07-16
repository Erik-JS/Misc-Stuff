/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp4_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomActionMP_ShieldBoost_execPopulatePowerStatBarEvolves_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomActionMP_ShieldBoost_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.EvolvePower
// [0x00020002] 
struct USFXPowerCustomActionMP_ShieldBoost_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomActionMP_ShieldBoost_execApplyBonus_Parms
{
	struct FName                                       Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove : 1;                                      		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.OnImpact
// [0x00820002] 
struct USFXPowerCustomActionMP_ShieldBoost_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class Asfxpawn*                                 oPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// class Asfxshield_base*                          Shields;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FRvrClientEffectTarget                   CETarget;                                         		// 0x0030 (0x0070) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x00A0 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_CappedDamageReduction*     oEffect;                                          		// 0x00A4 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.ReleaseBuffPower
// [0x00020002] 
struct USFXPowerCustomActionMP_ShieldBoost_execReleaseBuffPower_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execPopulatePowerStatBarEvolves_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomActionMP_BioticOrbs_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.EvolvePower
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.CanOverrideMoveWith
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.OnOwnerDestroyed
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execOnOwnerDestroyed_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomActionMP_BioticOrbs_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback : 1;                                   		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.DoJoinInProgress
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execDoJoinInProgress_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.OnImpact
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class Asfxpawn*                                 oPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             nDebuffCount;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           fLeastDuration;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect*                           oLeastDuration;                                   		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.StartPowerCooldown
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execStartPowerCooldown_Parms
{
	// class UBioCheatManager*                         CheatManager;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.RemoveAllOrbEffects
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomActionMP_BioticOrbs_execRemoveAllOrbEffects_Parms
{
	// int                                             idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.RemoveOrbEffect
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomActionMP_BioticOrbs_execRemoveOrbEffect_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.AddOrbEffects
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomActionMP_BioticOrbs_execAddOrbEffects_Parms
{
	// struct FGuid                                    NewGuid;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.ReleasePower_CooldownBonus
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execReleasePower_CooldownBonus_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.ReleasePower_ThrowOrb
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execReleasePower_ThrowOrb_Parms
{
	int                                                expectedCurrentOrbCount;                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawnTarget;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             ClientOrbCountDiff;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.ReleasePower_NewOrbs
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execReleasePower_NewOrbs_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.ReleasePower
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execReleasePower_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.StartCustomAction
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.CanUsePower
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execCanUsePower_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.OnPowerReleased
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execOnPowerReleased_Parms
{
	class Usfxpowercustomaction*                       oPower;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           fCooldown;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.OnPowersLoaded
// [0x00020002] 
struct USFXPowerCustomActionMP_BioticOrbs_execOnPowersLoaded_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_VolusPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomActionMP_VolusPassive_execApplyGlobalBonus_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_WeaponWeightModifier*      WeaponWeight;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomActionMP_VolusMeleePassive_execPopulatePowerStatBarEvolves_Parms
{
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomActionMP_VolusMeleePassive_execApplyBonus_Parms
{
	struct FName                                       Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove : 1;                                      		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomActionMP_VolusMeleePassive_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.EvolvePower
// [0x00020002] 
struct USFXPowerCustomActionMP_VolusMeleePassive_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomActionMP_VolusMeleePassive_execApplyGlobalBonus_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeLeft.RollOverride
// [0x00020002] 
struct USFXCustomAction_VolusEvadeLeft_execRollOverride_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeLeft.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusEvadeLeft_execStartCustomAction_Parms
{
	// struct FVector                                  ToEnd2D;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeLeft.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_VolusEvadeLeft_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeRight.RollOverride
// [0x00020002] 
struct USFXCustomAction_VolusEvadeRight_execRollOverride_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeRight.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusEvadeRight_execStartCustomAction_Parms
{
	// struct FVector                                  ToEnd2D;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeRight.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_VolusEvadeRight_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_VolusEvadeForward_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.RollOverride
// [0x00020002] 
struct USFXCustomAction_VolusEvadeForward_execRollOverride_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusEvadeForward_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusEvadeForward_execEndThisCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.SyncRotation
// [0x00020002] 
struct USFXCustomAction_VolusEvadeForward_execSyncRotation_Parms
{
	float                                              Alpha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ToEnd2D;                                          		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 R;                                                		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusEvadeForward_execStartCustomAction_Parms
{
	// struct FVector                                  ToEnd2D;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_VolusEvadeForward_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeBackwards.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_VolusEvadeBackwards_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeBackwards.RollOverride
// [0x00020002] 
struct USFXCustomAction_VolusEvadeBackwards_execRollOverride_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeBackwards.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusEvadeBackwards_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeBackwards.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusEvadeBackwards_execStartCustomAction_Parms
{
	// struct FVector                                  ToEnd2D;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeBackwards.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_VolusEvadeBackwards_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.RegenShields
// [0x00020002] 
struct USFXCustomAction_VolusDuck_execRegenShields_Parms
{
	// class Asfxshield_base*                          Shield;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           fCurrentShields;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fUpdatedShields;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.InterruptThisCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusDuck_execInterruptThisCustomAction_Parms
{
	// float                                           TimeHeld;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.ReleaseMelee
// [0x00020002] 
struct USFXCustomAction_VolusDuck_execReleaseMelee_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusDuck_execEndThisCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusDuck_execStopCustomAction_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   AffectedActor;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.OnTimelineImpact
// [0x00020000] 
struct USFXCustomAction_VolusDuck_execOnTimelineImpact_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_VolusDuck_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_VolusDuck_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_VolusDuck_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.MeleeImpact
// [0x00020002] 
struct USFXCustomAction_VolusDuck_execMeleeImpact_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusDuck_execStartCustomAction_Parms
{
	// class USFXPowerCustomActionBase*                oPower;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   NearbyActor;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_VolusDuck_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusCloakEscape.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusCloakEscape_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusCloakEscape.CloakEnded
// [0x00020002] 
struct USFXCustomAction_VolusCloakEscape_execCloakEnded_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusCloakEscape.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_VolusCloakEscape_execStartCustomAction_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusCloakEscape.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_VolusCloakEscape_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXGameEffect_ShieldBoostRestore.OnRemoved
// [0x00020802] ( FUNC_Event )
struct USFXGameEffect_ShieldBoostRestore_eventOnRemoved_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXGameEffect_ShieldBoostRestore.RestoreShields
// [0x00020003] ( FUNC_Final )
struct USFXGameEffect_ShieldBoostRestore_execRestoreShields_Parms
{
	// class Asfxshield_base*                          Shields;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXGameEffect_ShieldBoostRestore.OnApplied
// [0x00020002] 
struct USFXGameEffect_ShieldBoostRestore_execOnApplied_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.HealthFailsafe
// [0x00020003] ( FUNC_Final )
struct ASFXPawn_PlayerMP_Vanguard_Volus_execHealthFailsafe_Parms
{
	// class Usfxmodule_damage*                        DmgMod;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.RagdollFailsafe
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execRagdollFailsafe_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.ResetSyncMovementFailsafeInfo
// [0x00020003] ( FUNC_Final )
struct ASFXPawn_PlayerMP_Vanguard_Volus_execResetSyncMovementFailsafeInfo_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.ProcessSyncMovementFailsafe
// [0x00020003] ( FUNC_Final )
struct ASFXPawn_PlayerMP_Vanguard_Volus_execProcessSyncMovementFailsafe_Parms
{
	// float                                           DeltaZ;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   CurrentZDeltaPositive : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamempcontent.sfxpawn_playermp.Tick
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.CanDoCustomAction
// [0x00024902] ( FUNC_Event )
struct ASFXPawn_PlayerMP_Vanguard_Volus_eventCanDoCustomAction_Parms
{
	int                                                CAction;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Sync;                                             		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bForced : 1;                                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                PowerCustomAction;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.ShouldShowHUDGrenadeCounter
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execShouldShowHUDGrenadeCounter_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateGameEffects
// [0x00020100] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execUpdateGameEffects_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.GetUIAppearanceTag
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execGetUIAppearanceTag_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.Destroyed
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execDestroyed_Parms
{
	// class USFXPowerCustomAction_CombatDrone*        Power_Drone;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXPowerCustomAction_SentryTurret*       Power_Turret;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXPowerCustomAction_Decoy*              Power_Decoy;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  PlayerLeftMessage;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXMPEventTicker*                        EventTicker;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.Touch
// [0x00020802] ( FUNC_Event )
struct ASFXPawn_PlayerMP_Vanguard_Volus_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AVolume*                                  V;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class USFXGUI_MPHUD*                            oHud;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.SetExecutioner
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execSetExecutioner_Parms
{
	class APawn*                                       Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.AttemptKillingBlow
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execAttemptKillingBlow_Parms
{
	class APawn*                                       Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class Usfxgui_playercountdown*                  movie;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateMappedPowerDisplay
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execUpdateMappedPowerDisplay_Parms
{
	// class USFXGUI_MPHUD*                            oHud;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.CanPlayDeathEffect
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execCanPlayDeathEffect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.UseReviveConsumablePower
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execUseReviveConsumablePower_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class Usfxpowercustomactionmp_consumable_revive* Revive;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.AutoMapPC
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execAutoMapPC_Parms
{
	// class USFXGUIInteraction*                       oGM;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXSFHandler_PCPowerWheel*               oPowerWheel;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXPowerCustomActionBase*                oPower;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     BPC;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< struct FName >                          PowerHotkeyAssignments;                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxpawn_playermp.AutoMapXbox
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execAutoMapXbox_Parms
{
	// class UBioPlayerInput*                          BPI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.ShouldTossWeapon
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execShouldTossWeapon_Parms
{
	class ASFXWeapon*                                  ChkWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  NewWeapon;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.InCombat
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execInCombat_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.Died
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   ToRet : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamempcontent.sfxpawn_playermp.PossessedBy
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadWeaponModData
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execLoadWeaponModData_Parms
{
	// int                                             idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx2;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             WeaponModLevel;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               CurrWeapon;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXModule_WeaponModManager*              Manager;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ModClass;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// class Asfxprimp*                                oPRI;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FName                                    WeaponClassPath;                                  		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FName                                    WeaponModClassPath;                               		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadPowerData
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execLoadPowerData_Parms
{
	// TArray< struct FPowerSaveInfo >                 Powers;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Idx2;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             CurrentRank;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// class USFXPowerCustomActionBase*                Power;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class Asfxprimp*                                oPRI;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FName                                    PowerClassPath;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             EvolvedChoices[ 0x6 ];                            		// 0x0028 (0x0018) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.IsTestFrameworkSetupComplete
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execIsTestFrameworkSetupComplete_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadWeapons
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execLoadWeapons_Parms
{
	// int                                             idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumWeaponCreated;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             WeaponLevel;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   SelectedWeaponClass;                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               W;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class Asfxprimp*                                oPRI;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FName                                    WeaponClassPath;                                  		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.CreateWeapons
// [0x00024002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execCreateWeapons_Parms
{
	class USFXLoadoutData*                             ChkLoadout;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceFromEngineLoadout : 1;                      		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.GetFullName
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execGetFullName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxpawn_playermp.DeferredSetRichPresence
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execDeferredSetRichPresence_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.StopLoadingMovie
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execStopLoadingMovie_Parms
{
	// class Asfxplayercontrollermp*                   PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.DeferredPostBeginPlay
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execDeferredPostBeginPlay_Parms
{
	// class USFXSimpleUseModule*                      UseModule;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  CharacterName;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FName                                    CharacterKit;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FString                                  PlayerJoinedMessage;                              		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// void*                                           ClassPrettyName;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             Level;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             PawnTint1ID;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             PawnTint2ID;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             PawnPatternID;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             PawnPatternColorID;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             PawnPhongID;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             PawnEmissiveID;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             PawnSkinToneID;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             n7Rating;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           XP;                                               		// 0x004C (0x0004) [0x0000000000000000]              
	// class USFXModule_WeaponModManager*              Manager;                                          		// 0x0050 (0x0004) [0x0000000000000000]              
	// class Usfxmodule_damageplayer*                  DmgMod;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	// class Asfxprimp*                                oPRI;                                             		// 0x0058 (0x0004) [0x0000000000000000]              
	// class Asfxgrimp*                                GRI;                                              		// 0x005C (0x0004) [0x0000000000000000]              
	// class USFXMPEventTicker*                        EventTicker;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bInvReadyToInit : 1;                              		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	// class USFXOnlineSubsystem*                      OnlineSubsystem;                                  		// 0x0068 (0x0004) [0x0000000000000000]              
	// class UISFXOnlineComponentGame*                 OnlineGame;                                       		// 0x006C (0x0008) [0x0000000000000000]              
	// unsigned long                                   bOnlineGameIsValid : 1;                           		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	// class Asfxplayercontrollermp*                   PC;                                               		// 0x0078 (0x0004) [0x0000000000000000]              
	// class USFXEngine*                               oEngine;                                          		// 0x007C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bLoadingMoviePlaying : 1;                         		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamempcontent.sfxpawn_playermp.PostBeginPlay
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execPostBeginPlay_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.ServerPermaDeath
// [0x002200C2] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execServerPermaDeath_Parms
{
	// class Usfxmodule_damage*                        DmgMod;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.PermaDeath
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execPermaDeath_Parms
{
	// class Usfxgui_playercountdown*                  movie;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.StartSpectatorCam
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execStartSpectatorCam_Parms
{
	// class Usfxmodule_damageplayer*                  DmgPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.PermaDeadChanged
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execPermaDeadChanged_Parms
{
	// struct FString                                  TickerMessage;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxpawn_playermp.Resurrect
// [0x00020802] ( FUNC_Event )
struct ASFXPawn_PlayerMP_Vanguard_Volus_eventResurrect_Parms
{
	float                                              PercentOfHealthRegained;                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsInstantaneous : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.PreClientTravel
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execPreClientTravel_Parms
{
	// class Usfxmodule_damageplayer*                  DmgPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.IsReadyForExecution
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execIsReadyForExecution_Parms
{
	class Asfxpawn*                                    Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.IsDeadUpdated
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execIsDeadUpdated_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.StartRevive
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execStartRevive_Parms
{
	class ASFXPawn_PlayerParty*                        TargetPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.FinalizeProcessFellOutOfWorld
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execFinalizeProcessFellOutOfWorld_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.ServerFellOutOfWorldImpl
// [0x002200C2] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execServerFellOutOfWorldImpl_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.FellOutOfWorldImpl
// [0x00020902] ( FUNC_Event )
struct ASFXPawn_PlayerMP_Vanguard_Volus_eventFellOutOfWorldImpl_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.BioBaseRemovedFromWorld
// [0x00020100] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execBioBaseRemovedFromWorld_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.OutsideWorldBounds
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execOutsideWorldBounds_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.FellOutOfWorld
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execFellOutOfWorld_Parms
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.ApplyCustomizationToActor
// [0x00024002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execApplyCustomizationToActor_Parms
{
	class AActor*                                      InTarget;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXCustomizationInstance*                   InSettings;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                UIWorldConfigFlags;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.GetMPAppearanceVariables
// [0x00420102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execGetMPAppearanceVariables_Parms
{
	int                                                Tint1;                                            		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Tint2;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Pattern;                                          		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                PatternColor;                                     		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Phong;                                            		// 0x0010 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Emissive;                                         		// 0x0014 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                SkinTone;                                         		// 0x0018 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.SetMPAppearanceVariables
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execSetMPAppearanceVariables_Parms
{
	int                                                Tint1;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Tint2;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Pattern;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PatternColor;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Phong;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Emissive;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SkinTone;                                         		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateAppearance
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execUpdateAppearance_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.CopyPawnAppearance
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execCopyPawnAppearance_Parms
{
	class ABioPawn*                                    SourcePawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class Asfxpawn_playermp*                        SourcePlayer;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Tint1;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Tint2;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Pattern;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             PatternColor;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Phong;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Emissive;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             SkinTone;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.CheckEnterCombat
// [0x00020000] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execCheckEnterCombat_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.PlayerRevivedMessage
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execPlayerRevivedMessage_Parms
{
	// struct FString                                  TickerMessage;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxpawn_playermp.PlayerKilledMessage
// [0x00020102] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execPlayerKilledMessage_Parms
{
	// struct FString                                  TickerMessage;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxpawn_playermp.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASFXPawn_PlayerMP_Vanguard_Volus_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.GetActorGameName
// [0x00020002] 
struct ASFXPawn_PlayerMP_Vanguard_Volus_execGetActorGameName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamecontent.SFXProjectile_PowerCustomAction_SuperSeeking.InitializeRotation
// [0x00020002] 
struct ASFXProjectile_PowerCustomAction_BioticOrbs_execInitializeRotation_Parms
{
	class APawn*                                       oCasterPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPlayerController*                     PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fAngle;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vToTarget;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rToTarget;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rDeltaRot;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FQuat                                    qToTarget;                                        		// 0x0030 (0x0010) [0x0000000000000000]              
	// struct FQuat                                    qCameraRot;                                       		// 0x0040 (0x0010) [0x0000000000000000]              
	// struct FQuat                                    qDeltaRot;                                        		// 0x0050 (0x0010) [0x0000000000000000]              
	// float                                           fPitchRatio;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	// struct FQuat                                    AimOffset;                                        		// 0x0070 (0x0010) [0x0000000000000000]              
	// float                                           fAimScale;                                        		// 0x0080 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontent.SFXProjectile_PowerCustomAction_SuperSeeking.TickAimRotation
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_BioticOrbs_execTickAimRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SeekVector;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Factor;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FQuat                                    Q;                                                		// 0x0020 (0x0010) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif