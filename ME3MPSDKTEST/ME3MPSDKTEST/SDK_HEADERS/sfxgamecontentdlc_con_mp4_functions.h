/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp4_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.PopulatePowerStatBarEvolves
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_ShieldBoost::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = (UFunction*) UObject::GObjObjects()->Data[ 136319 ];

	USFXPowerCustomActionMP_ShieldBoost_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.RecalculateAllPowerData
// [0x00024002] 
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_ShieldBoost::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = (UFunction*) UObject::GObjObjects()->Data[ 136317 ];

	USFXPowerCustomActionMP_ShieldBoost_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.EvolvePower
// [0x00020002] 
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomActionMP_ShieldBoost::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = (UFunction*) UObject::GObjObjects()->Data[ 136310 ];

	USFXPowerCustomActionMP_ShieldBoost_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.ApplyBonus
// [0x00024002] 
// Parameters infos:
// struct FName                   Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_ShieldBoost::ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = (UFunction*) UObject::GObjObjects()->Data[ 136306 ];

	USFXPowerCustomActionMP_ShieldBoost_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.OnImpact
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomActionMP_ShieldBoost::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 136283 ];

	USFXPowerCustomActionMP_ShieldBoost_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_ShieldBoost.ReleaseBuffPower
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_ShieldBoost::ReleaseBuffPower ( )
{
	static UFunction* pFnReleaseBuffPower = NULL;

	if ( ! pFnReleaseBuffPower )
		pFnReleaseBuffPower = (UFunction*) UObject::GObjObjects()->Data[ 136281 ];

	USFXPowerCustomActionMP_ShieldBoost_execReleaseBuffPower_Parms ReleaseBuffPower_Parms;

	this->ProcessEvent ( pFnReleaseBuffPower, &ReleaseBuffPower_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.PopulatePowerStatBarEvolves
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = (UFunction*) UObject::GObjObjects()->Data[ 136260 ];

	USFXPowerCustomActionMP_BioticOrbs_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.RecalculateAllPowerData
// [0x00024002] 
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_BioticOrbs::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = (UFunction*) UObject::GObjObjects()->Data[ 136258 ];

	USFXPowerCustomActionMP_BioticOrbs_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.EvolvePower
// [0x00020002] 
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomActionMP_BioticOrbs::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = (UFunction*) UObject::GObjObjects()->Data[ 136251 ];

	USFXPowerCustomActionMP_BioticOrbs_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.CanOverrideMoveWith
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldCustomAction                ( CPF_Parm )
// int                            NewCustomAction                ( CPF_Parm )

bool USFXPowerCustomActionMP_BioticOrbs::CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = (UFunction*) UObject::GObjObjects()->Data[ 136247 ];

	USFXPowerCustomActionMP_BioticOrbs_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	CanOverrideMoveWith_Parms.OldCustomAction = OldCustomAction;
	CanOverrideMoveWith_Parms.NewCustomAction = NewCustomAction;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.OnOwnerDestroyed
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::OnOwnerDestroyed ( )
{
	static UFunction* pFnOnOwnerDestroyed = NULL;

	if ( ! pFnOnOwnerDestroyed )
		pFnOnOwnerDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 136246 ];

	USFXPowerCustomActionMP_BioticOrbs_execOnOwnerDestroyed_Parms OnOwnerDestroyed_Parms;

	this->ProcessEvent ( pFnOnOwnerDestroyed, &OnOwnerDestroyed_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.ClientDoPowerSubsequentImpact
// [0x00024002] 
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// float                          Delay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  DoCallback                     ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_BioticOrbs::ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback )
{
	static UFunction* pFnClientDoPowerSubsequentImpact = NULL;

	if ( ! pFnClientDoPowerSubsequentImpact )
		pFnClientDoPowerSubsequentImpact = (UFunction*) UObject::GObjObjects()->Data[ 136239 ];

	USFXPowerCustomActionMP_BioticOrbs_execClientDoPowerSubsequentImpact_Parms ClientDoPowerSubsequentImpact_Parms;
	ClientDoPowerSubsequentImpact_Parms.oActor = oActor;
	ClientDoPowerSubsequentImpact_Parms.CustomActionReactionType = CustomActionReactionType;
	ClientDoPowerSubsequentImpact_Parms.Duration = Duration;
	ClientDoPowerSubsequentImpact_Parms.ImpactCount = ImpactCount;
	ClientDoPowerSubsequentImpact_Parms.Delay = Delay;
	ClientDoPowerSubsequentImpact_Parms.DoCallback = DoCallback;

	this->ProcessEvent ( pFnClientDoPowerSubsequentImpact, &ClientDoPowerSubsequentImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.DoJoinInProgress
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::DoJoinInProgress ( )
{
	static UFunction* pFnDoJoinInProgress = NULL;

	if ( ! pFnDoJoinInProgress )
		pFnDoJoinInProgress = (UFunction*) UObject::GObjObjects()->Data[ 136238 ];

	USFXPowerCustomActionMP_BioticOrbs_execDoJoinInProgress_Parms DoJoinInProgress_Parms;

	this->ProcessEvent ( pFnDoJoinInProgress, &DoJoinInProgress_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.OnImpact
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomActionMP_BioticOrbs::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 136221 ];

	USFXPowerCustomActionMP_BioticOrbs_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.StartPowerCooldown
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::StartPowerCooldown ( )
{
	static UFunction* pFnStartPowerCooldown = NULL;

	if ( ! pFnStartPowerCooldown )
		pFnStartPowerCooldown = (UFunction*) UObject::GObjObjects()->Data[ 136219 ];

	USFXPowerCustomActionMP_BioticOrbs_execStartPowerCooldown_Parms StartPowerCooldown_Parms;

	this->ProcessEvent ( pFnStartPowerCooldown, &StartPowerCooldown_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.RemoveAllOrbEffects
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::RemoveAllOrbEffects ( )
{
	static UFunction* pFnRemoveAllOrbEffects = NULL;

	if ( ! pFnRemoveAllOrbEffects )
		pFnRemoveAllOrbEffects = (UFunction*) UObject::GObjObjects()->Data[ 136194 ];

	USFXPowerCustomActionMP_BioticOrbs_execRemoveAllOrbEffects_Parms RemoveAllOrbEffects_Parms;

	this->ProcessEvent ( pFnRemoveAllOrbEffects, &RemoveAllOrbEffects_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.RemoveOrbEffect
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::RemoveOrbEffect ( )
{
	static UFunction* pFnRemoveOrbEffect = NULL;

	if ( ! pFnRemoveOrbEffect )
		pFnRemoveOrbEffect = (UFunction*) UObject::GObjObjects()->Data[ 136204 ];

	USFXPowerCustomActionMP_BioticOrbs_execRemoveOrbEffect_Parms RemoveOrbEffect_Parms;

	this->ProcessEvent ( pFnRemoveOrbEffect, &RemoveOrbEffect_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.AddOrbEffects
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::AddOrbEffects ( )
{
	static UFunction* pFnAddOrbEffects = NULL;

	if ( ! pFnAddOrbEffects )
		pFnAddOrbEffects = (UFunction*) UObject::GObjObjects()->Data[ 136196 ];

	USFXPowerCustomActionMP_BioticOrbs_execAddOrbEffects_Parms AddOrbEffects_Parms;

	this->ProcessEvent ( pFnAddOrbEffects, &AddOrbEffects_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.ReleasePower_CooldownBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::ReleasePower_CooldownBonus ( )
{
	static UFunction* pFnReleasePower_CooldownBonus = NULL;

	if ( ! pFnReleasePower_CooldownBonus )
		pFnReleasePower_CooldownBonus = (UFunction*) UObject::GObjObjects()->Data[ 136209 ];

	USFXPowerCustomActionMP_BioticOrbs_execReleasePower_CooldownBonus_Parms ReleasePower_CooldownBonus_Parms;

	this->ProcessEvent ( pFnReleasePower_CooldownBonus, &ReleasePower_CooldownBonus_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.ReleasePower_ThrowOrb
// [0x00020002] 
// Parameters infos:
// int                            expectedCurrentOrbCount        ( CPF_Parm )

void USFXPowerCustomActionMP_BioticOrbs::ReleasePower_ThrowOrb ( int expectedCurrentOrbCount )
{
	static UFunction* pFnReleasePower_ThrowOrb = NULL;

	if ( ! pFnReleasePower_ThrowOrb )
		pFnReleasePower_ThrowOrb = (UFunction*) UObject::GObjObjects()->Data[ 136199 ];

	USFXPowerCustomActionMP_BioticOrbs_execReleasePower_ThrowOrb_Parms ReleasePower_ThrowOrb_Parms;
	ReleasePower_ThrowOrb_Parms.expectedCurrentOrbCount = expectedCurrentOrbCount;

	this->ProcessEvent ( pFnReleasePower_ThrowOrb, &ReleasePower_ThrowOrb_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.ReleasePower_NewOrbs
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::ReleasePower_NewOrbs ( )
{
	static UFunction* pFnReleasePower_NewOrbs = NULL;

	if ( ! pFnReleasePower_NewOrbs )
		pFnReleasePower_NewOrbs = (UFunction*) UObject::GObjObjects()->Data[ 136192 ];

	USFXPowerCustomActionMP_BioticOrbs_execReleasePower_NewOrbs_Parms ReleasePower_NewOrbs_Parms;

	this->ProcessEvent ( pFnReleasePower_NewOrbs, &ReleasePower_NewOrbs_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.ReleasePower
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::ReleasePower ( )
{
	static UFunction* pFnReleasePower = NULL;

	if ( ! pFnReleasePower )
		pFnReleasePower = (UFunction*) UObject::GObjObjects()->Data[ 136191 ];

	USFXPowerCustomActionMP_BioticOrbs_execReleasePower_Parms ReleasePower_Parms;

	this->ProcessEvent ( pFnReleasePower, &ReleasePower_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136188 ];

	USFXPowerCustomActionMP_BioticOrbs_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.CanUsePower
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )

bool USFXPowerCustomActionMP_BioticOrbs::CanUsePower ( class AActor* oTarget )
{
	static UFunction* pFnCanUsePower = NULL;

	if ( ! pFnCanUsePower )
		pFnCanUsePower = (UFunction*) UObject::GObjObjects()->Data[ 136185 ];

	USFXPowerCustomActionMP_BioticOrbs_execCanUsePower_Parms CanUsePower_Parms;
	CanUsePower_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnCanUsePower, &CanUsePower_Parms, NULL );

	return CanUsePower_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.OnPowerReleased
// [0x00020002] 
// Parameters infos:
// class Usfxpowercustomaction*   oPower                         ( CPF_Parm )

void USFXPowerCustomActionMP_BioticOrbs::OnPowerReleased ( class Usfxpowercustomaction* oPower )
{
	static UFunction* pFnOnPowerReleased = NULL;

	if ( ! pFnOnPowerReleased )
		pFnOnPowerReleased = (UFunction*) UObject::GObjObjects()->Data[ 136181 ];

	USFXPowerCustomActionMP_BioticOrbs_execOnPowerReleased_Parms OnPowerReleased_Parms;
	OnPowerReleased_Parms.oPower = oPower;

	this->ProcessEvent ( pFnOnPowerReleased, &OnPowerReleased_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_BioticOrbs.OnPowersLoaded
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_BioticOrbs::OnPowersLoaded ( )
{
	static UFunction* pFnOnPowersLoaded = NULL;

	if ( ! pFnOnPowersLoaded )
		pFnOnPowersLoaded = (UFunction*) UObject::GObjObjects()->Data[ 136180 ];

	USFXPowerCustomActionMP_BioticOrbs_execOnPowersLoaded_Parms OnPowersLoaded_Parms;

	this->ProcessEvent ( pFnOnPowersLoaded, &OnPowersLoaded_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_VolusPassive.ApplyGlobalBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_VolusPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = (UFunction*) UObject::GObjObjects()->Data[ 136330 ];

	USFXPowerCustomActionMP_VolusPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.PopulatePowerStatBarEvolves
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_VolusMeleePassive::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = (UFunction*) UObject::GObjObjects()->Data[ 129504 ];

	USFXPowerCustomActionMP_VolusMeleePassive_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.ApplyBonus
// [0x00024002] 
// Parameters infos:
// struct FName                   Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_VolusMeleePassive::ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = (UFunction*) UObject::GObjObjects()->Data[ 129500 ];

	USFXPowerCustomActionMP_VolusMeleePassive_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.RecalculateAllPowerData
// [0x00024002] 
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_VolusMeleePassive::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = (UFunction*) UObject::GObjObjects()->Data[ 129498 ];

	USFXPowerCustomActionMP_VolusMeleePassive_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.EvolvePower
// [0x00020002] 
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomActionMP_VolusMeleePassive::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = (UFunction*) UObject::GObjObjects()->Data[ 129492 ];

	USFXPowerCustomActionMP_VolusMeleePassive_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.ApplyGlobalBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_VolusMeleePassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = (UFunction*) UObject::GObjObjects()->Data[ 129488 ];

	USFXPowerCustomActionMP_VolusMeleePassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeLeft.RollOverride
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusEvadeLeft::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = (UFunction*) UObject::GObjObjects()->Data[ 136089 ];

	USFXCustomAction_VolusEvadeLeft_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeLeft.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusEvadeLeft::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136086 ];

	USFXCustomAction_VolusEvadeLeft_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeLeft.InternalCanDoCustomAction
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_VolusEvadeLeft::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136082 ];

	USFXCustomAction_VolusEvadeLeft_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeRight.RollOverride
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusEvadeRight::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = (UFunction*) UObject::GObjObjects()->Data[ 136099 ];

	USFXCustomAction_VolusEvadeRight_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeRight.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusEvadeRight::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136096 ];

	USFXCustomAction_VolusEvadeRight_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeRight.InternalCanDoCustomAction
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_VolusEvadeRight::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136092 ];

	USFXCustomAction_VolusEvadeRight_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.ClientDoCustomActionImpact
// [0x00024002] 
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_VolusEvadeForward::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = (UFunction*) UObject::GObjObjects()->Data[ 136069 ];

	USFXCustomAction_VolusEvadeForward_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.RollOverride
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusEvadeForward::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = (UFunction*) UObject::GObjObjects()->Data[ 136068 ];

	USFXCustomAction_VolusEvadeForward_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusEvadeForward::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136067 ];

	USFXCustomAction_VolusEvadeForward_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.EndThisCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusEvadeForward::EndThisCustomAction ( )
{
	static UFunction* pFnEndThisCustomAction = NULL;

	if ( ! pFnEndThisCustomAction )
		pFnEndThisCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136066 ];

	USFXCustomAction_VolusEvadeForward_execEndThisCustomAction_Parms EndThisCustomAction_Parms;

	this->ProcessEvent ( pFnEndThisCustomAction, &EndThisCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.SyncRotation
// [0x00020002] 
// Parameters infos:
// float                          Alpha                          ( CPF_Parm )
// struct FVector                 ToEnd2D                        ( CPF_Parm )

void USFXCustomAction_VolusEvadeForward::SyncRotation ( float Alpha, struct FVector ToEnd2D )
{
	static UFunction* pFnSyncRotation = NULL;

	if ( ! pFnSyncRotation )
		pFnSyncRotation = (UFunction*) UObject::GObjObjects()->Data[ 136062 ];

	USFXCustomAction_VolusEvadeForward_execSyncRotation_Parms SyncRotation_Parms;
	SyncRotation_Parms.Alpha = Alpha;
	memcpy ( &SyncRotation_Parms.ToEnd2D, &ToEnd2D, 0xC );

	this->ProcessEvent ( pFnSyncRotation, &SyncRotation_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusEvadeForward::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136058 ];

	USFXCustomAction_VolusEvadeForward_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeForward.InternalCanDoCustomAction
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_VolusEvadeForward::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136054 ];

	USFXCustomAction_VolusEvadeForward_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeBackwards.ClientDoCustomActionImpact
// [0x00024002] 
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_VolusEvadeBackwards::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = (UFunction*) UObject::GObjObjects()->Data[ 136042 ];

	USFXCustomAction_VolusEvadeBackwards_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeBackwards.RollOverride
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusEvadeBackwards::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = (UFunction*) UObject::GObjObjects()->Data[ 136041 ];

	USFXCustomAction_VolusEvadeBackwards_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeBackwards.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusEvadeBackwards::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136040 ];

	USFXCustomAction_VolusEvadeBackwards_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeBackwards.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusEvadeBackwards::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136037 ];

	USFXCustomAction_VolusEvadeBackwards_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusEvadeBackwards.InternalCanDoCustomAction
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_VolusEvadeBackwards::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136033 ];

	USFXCustomAction_VolusEvadeBackwards_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.RegenShields
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusDuck::RegenShields ( )
{
	static UFunction* pFnRegenShields = NULL;

	if ( ! pFnRegenShields )
		pFnRegenShields = (UFunction*) UObject::GObjObjects()->Data[ 136019 ];

	USFXCustomAction_VolusDuck_execRegenShields_Parms RegenShields_Parms;

	this->ProcessEvent ( pFnRegenShields, &RegenShields_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.InterruptThisCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusDuck::InterruptThisCustomAction ( )
{
	static UFunction* pFnInterruptThisCustomAction = NULL;

	if ( ! pFnInterruptThisCustomAction )
		pFnInterruptThisCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136014 ];

	USFXCustomAction_VolusDuck_execInterruptThisCustomAction_Parms InterruptThisCustomAction_Parms;

	this->ProcessEvent ( pFnInterruptThisCustomAction, &InterruptThisCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.ReleaseMelee
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusDuck::ReleaseMelee ( )
{
	static UFunction* pFnReleaseMelee = NULL;

	if ( ! pFnReleaseMelee )
		pFnReleaseMelee = (UFunction*) UObject::GObjObjects()->Data[ 136013 ];

	USFXCustomAction_VolusDuck_execReleaseMelee_Parms ReleaseMelee_Parms;

	this->ProcessEvent ( pFnReleaseMelee, &ReleaseMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.EndThisCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusDuck::EndThisCustomAction ( )
{
	static UFunction* pFnEndThisCustomAction = NULL;

	if ( ! pFnEndThisCustomAction )
		pFnEndThisCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136010 ];

	USFXCustomAction_VolusDuck_execEndThisCustomAction_Parms EndThisCustomAction_Parms;

	this->ProcessEvent ( pFnEndThisCustomAction, &EndThisCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusDuck::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136007 ];

	USFXCustomAction_VolusDuck_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.OnTimelineImpact
// [0x00020000] 
// Parameters infos:
// class AActor*                  Target                         ( CPF_Parm )

void USFXCustomAction_VolusDuck::OnTimelineImpact ( class AActor* Target )
{
	static UFunction* pFnOnTimelineImpact = NULL;

	if ( ! pFnOnTimelineImpact )
		pFnOnTimelineImpact = (UFunction*) UObject::GObjObjects()->Data[ 136005 ];

	USFXCustomAction_VolusDuck_execOnTimelineImpact_Parms OnTimelineImpact_Parms;
	OnTimelineImpact_Parms.Target = Target;

	this->ProcessEvent ( pFnOnTimelineImpact, &OnTimelineImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.OnActorImpacted
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_VolusDuck::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = (UFunction*) UObject::GObjObjects()->Data[ 135997 ];

	USFXCustomAction_VolusDuck_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.ClientDoCustomActionImpact
// [0x00024002] 
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_VolusDuck::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = (UFunction*) UObject::GObjObjects()->Data[ 135989 ];

	USFXCustomAction_VolusDuck_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.ReplicateImpact
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_VolusDuck::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = (UFunction*) UObject::GObjObjects()->Data[ 135982 ];

	USFXCustomAction_VolusDuck_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.MeleeImpact
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusDuck::MeleeImpact ( )
{
	static UFunction* pFnMeleeImpact = NULL;

	if ( ! pFnMeleeImpact )
		pFnMeleeImpact = (UFunction*) UObject::GObjObjects()->Data[ 135980 ];

	USFXCustomAction_VolusDuck_execMeleeImpact_Parms MeleeImpact_Parms;

	this->ProcessEvent ( pFnMeleeImpact, &MeleeImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusDuck::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135970 ];

	USFXCustomAction_VolusDuck_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusDuck.InternalCanDoCustomAction
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_VolusDuck::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135966 ];

	USFXCustomAction_VolusDuck_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusCloakEscape.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusCloakEscape::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135956 ];

	USFXCustomAction_VolusCloakEscape_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusCloakEscape.CloakEnded
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusCloakEscape::CloakEnded ( )
{
	static UFunction* pFnCloakEnded = NULL;

	if ( ! pFnCloakEnded )
		pFnCloakEnded = (UFunction*) UObject::GObjObjects()->Data[ 135953 ];

	USFXCustomAction_VolusCloakEscape_execCloakEnded_Parms CloakEnded_Parms;

	this->ProcessEvent ( pFnCloakEnded, &CloakEnded_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusCloakEscape.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_VolusCloakEscape::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135946 ];

	USFXCustomAction_VolusCloakEscape_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_VolusCloakEscape.InternalCanDoCustomAction
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_VolusCloakEscape::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135941 ];

	USFXCustomAction_VolusCloakEscape_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXGameEffect_ShieldBoostRestore.OnRemoved
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGameEffect_ShieldBoostRestore::eventOnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = (UFunction*) UObject::GObjObjects()->Data[ 136115 ];

	USFXGameEffect_ShieldBoostRestore_eventOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXGameEffect_ShieldBoostRestore.RestoreShields
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGameEffect_ShieldBoostRestore::RestoreShields ( )
{
	static UFunction* pFnRestoreShields = NULL;

	if ( ! pFnRestoreShields )
		pFnRestoreShields = (UFunction*) UObject::GObjObjects()->Data[ 136113 ];

	USFXGameEffect_ShieldBoostRestore_execRestoreShields_Parms RestoreShields_Parms;

	this->ProcessEvent ( pFnRestoreShields, &RestoreShields_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXGameEffect_ShieldBoostRestore.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_ShieldBoostRestore::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = (UFunction*) UObject::GObjObjects()->Data[ 136108 ];

	USFXGameEffect_ShieldBoostRestore_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.HealthFailsafe
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::HealthFailsafe ( )
{
	static UFunction* pFnHealthFailsafe = NULL;

	if ( ! pFnHealthFailsafe )
		pFnHealthFailsafe = (UFunction*) UObject::GObjObjects()->Data[ 112047 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execHealthFailsafe_Parms HealthFailsafe_Parms;

	this->ProcessEvent ( pFnHealthFailsafe, &HealthFailsafe_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.RagdollFailsafe
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::RagdollFailsafe ( )
{
	static UFunction* pFnRagdollFailsafe = NULL;

	if ( ! pFnRagdollFailsafe )
		pFnRagdollFailsafe = (UFunction*) UObject::GObjObjects()->Data[ 112045 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execRagdollFailsafe_Parms RagdollFailsafe_Parms;

	this->ProcessEvent ( pFnRagdollFailsafe, &RagdollFailsafe_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ResetSyncMovementFailsafeInfo
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::ResetSyncMovementFailsafeInfo ( )
{
	static UFunction* pFnResetSyncMovementFailsafeInfo = NULL;

	if ( ! pFnResetSyncMovementFailsafeInfo )
		pFnResetSyncMovementFailsafeInfo = (UFunction*) UObject::GObjObjects()->Data[ 112046 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execResetSyncMovementFailsafeInfo_Parms ResetSyncMovementFailsafeInfo_Parms;

	this->ProcessEvent ( pFnResetSyncMovementFailsafeInfo, &ResetSyncMovementFailsafeInfo_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ProcessSyncMovementFailsafe
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::ProcessSyncMovementFailsafe ( )
{
	static UFunction* pFnProcessSyncMovementFailsafe = NULL;

	if ( ! pFnProcessSyncMovementFailsafe )
		pFnProcessSyncMovementFailsafe = (UFunction*) UObject::GObjObjects()->Data[ 112059 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execProcessSyncMovementFailsafe_Parms ProcessSyncMovementFailsafe_Parms;

	this->ProcessEvent ( pFnProcessSyncMovementFailsafe, &ProcessSyncMovementFailsafe_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 112060 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.CanDoCustomAction
// [0x00024902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            CAction                        ( CPF_Parm )
// class APawn*                   Sync                           ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bForced                        ( CPF_OptionalParm | CPF_Parm )
// int                            PowerCustomAction              ( CPF_OptionalParm | CPF_Parm )

bool ASFXPawn_PlayerMP_Vanguard_Volus::eventCanDoCustomAction ( int CAction, class APawn* Sync, unsigned long bForced, int PowerCustomAction )
{
	static UFunction* pFnCanDoCustomAction = NULL;

	if ( ! pFnCanDoCustomAction )
		pFnCanDoCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 112039 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_eventCanDoCustomAction_Parms CanDoCustomAction_Parms;
	CanDoCustomAction_Parms.CAction = CAction;
	CanDoCustomAction_Parms.Sync = Sync;
	CanDoCustomAction_Parms.bForced = bForced;
	CanDoCustomAction_Parms.PowerCustomAction = PowerCustomAction;

	this->ProcessEvent ( pFnCanDoCustomAction, &CanDoCustomAction_Parms, NULL );

	return CanDoCustomAction_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.ShouldShowHUDGrenadeCounter
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXPawn_PlayerMP_Vanguard_Volus::ShouldShowHUDGrenadeCounter ( )
{
	static UFunction* pFnShouldShowHUDGrenadeCounter = NULL;

	if ( ! pFnShouldShowHUDGrenadeCounter )
		pFnShouldShowHUDGrenadeCounter = (UFunction*) UObject::GObjObjects()->Data[ 112037 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execShouldShowHUDGrenadeCounter_Parms ShouldShowHUDGrenadeCounter_Parms;

	this->ProcessEvent ( pFnShouldShowHUDGrenadeCounter, &ShouldShowHUDGrenadeCounter_Parms, NULL );

	return ShouldShowHUDGrenadeCounter_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateGameEffects
// [0x00020100] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::UpdateGameEffects ( )
{
	static UFunction* pFnUpdateGameEffects = NULL;

	if ( ! pFnUpdateGameEffects )
		pFnUpdateGameEffects = (UFunction*) UObject::GObjObjects()->Data[ 112036 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execUpdateGameEffects_Parms UpdateGameEffects_Parms;

	this->ProcessEvent ( pFnUpdateGameEffects, &UpdateGameEffects_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.GetUIAppearanceTag
// [0x00020002] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ASFXPawn_PlayerMP_Vanguard_Volus::GetUIAppearanceTag ( )
{
	static UFunction* pFnGetUIAppearanceTag = NULL;

	if ( ! pFnGetUIAppearanceTag )
		pFnGetUIAppearanceTag = (UFunction*) UObject::GObjObjects()->Data[ 112034 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execGetUIAppearanceTag_Parms GetUIAppearanceTag_Parms;

	this->ProcessEvent ( pFnGetUIAppearanceTag, &GetUIAppearanceTag_Parms, NULL );

	return GetUIAppearanceTag_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.Destroyed
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 112027 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 112020 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.SetExecutioner
// [0x00020002] 
// Parameters infos:
// class APawn*                   Killer                         ( CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::SetExecutioner ( class APawn* Killer )
{
	static UFunction* pFnSetExecutioner = NULL;

	if ( ! pFnSetExecutioner )
		pFnSetExecutioner = (UFunction*) UObject::GObjObjects()->Data[ 112018 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execSetExecutioner_Parms SetExecutioner_Parms;
	SetExecutioner_Parms.Killer = Killer;

	this->ProcessEvent ( pFnSetExecutioner, &SetExecutioner_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.AttemptKillingBlow
// [0x00020002] 
// Parameters infos:
// class APawn*                   Killer                         ( CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::AttemptKillingBlow ( class APawn* Killer )
{
	static UFunction* pFnAttemptKillingBlow = NULL;

	if ( ! pFnAttemptKillingBlow )
		pFnAttemptKillingBlow = (UFunction*) UObject::GObjObjects()->Data[ 112015 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execAttemptKillingBlow_Parms AttemptKillingBlow_Parms;
	AttemptKillingBlow_Parms.Killer = Killer;

	this->ProcessEvent ( pFnAttemptKillingBlow, &AttemptKillingBlow_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateMappedPowerDisplay
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::UpdateMappedPowerDisplay ( )
{
	static UFunction* pFnUpdateMappedPowerDisplay = NULL;

	if ( ! pFnUpdateMappedPowerDisplay )
		pFnUpdateMappedPowerDisplay = (UFunction*) UObject::GObjObjects()->Data[ 112011 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execUpdateMappedPowerDisplay_Parms UpdateMappedPowerDisplay_Parms;

	this->ProcessEvent ( pFnUpdateMappedPowerDisplay, &UpdateMappedPowerDisplay_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.CanPlayDeathEffect
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXPawn_PlayerMP_Vanguard_Volus::CanPlayDeathEffect ( )
{
	static UFunction* pFnCanPlayDeathEffect = NULL;

	if ( ! pFnCanPlayDeathEffect )
		pFnCanPlayDeathEffect = (UFunction*) UObject::GObjObjects()->Data[ 112009 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execCanPlayDeathEffect_Parms CanPlayDeathEffect_Parms;

	this->ProcessEvent ( pFnCanPlayDeathEffect, &CanPlayDeathEffect_Parms, NULL );

	return CanPlayDeathEffect_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.UseReviveConsumablePower
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::UseReviveConsumablePower ( )
{
	static UFunction* pFnUseReviveConsumablePower = NULL;

	if ( ! pFnUseReviveConsumablePower )
		pFnUseReviveConsumablePower = (UFunction*) UObject::GObjObjects()->Data[ 112006 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execUseReviveConsumablePower_Parms UseReviveConsumablePower_Parms;

	this->ProcessEvent ( pFnUseReviveConsumablePower, &UseReviveConsumablePower_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.AutoMapPC
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::AutoMapPC ( )
{
	static UFunction* pFnAutoMapPC = NULL;

	if ( ! pFnAutoMapPC )
		pFnAutoMapPC = (UFunction*) UObject::GObjObjects()->Data[ 111997 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execAutoMapPC_Parms AutoMapPC_Parms;

	this->ProcessEvent ( pFnAutoMapPC, &AutoMapPC_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.AutoMapXbox
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::AutoMapXbox ( )
{
	static UFunction* pFnAutoMapXbox = NULL;

	if ( ! pFnAutoMapXbox )
		pFnAutoMapXbox = (UFunction*) UObject::GObjObjects()->Data[ 111995 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execAutoMapXbox_Parms AutoMapXbox_Parms;

	this->ProcessEvent ( pFnAutoMapXbox, &AutoMapXbox_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ShouldTossWeapon
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFXWeapon*              ChkWeapon                      ( CPF_Parm )
// class ASFXWeapon*              NewWeapon                      ( CPF_Parm )

bool ASFXPawn_PlayerMP_Vanguard_Volus::ShouldTossWeapon ( class ASFXWeapon* ChkWeapon, class ASFXWeapon* NewWeapon )
{
	static UFunction* pFnShouldTossWeapon = NULL;

	if ( ! pFnShouldTossWeapon )
		pFnShouldTossWeapon = (UFunction*) UObject::GObjObjects()->Data[ 111991 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execShouldTossWeapon_Parms ShouldTossWeapon_Parms;
	ShouldTossWeapon_Parms.ChkWeapon = ChkWeapon;
	ShouldTossWeapon_Parms.NewWeapon = NewWeapon;

	this->ProcessEvent ( pFnShouldTossWeapon, &ShouldTossWeapon_Parms, NULL );

	return ShouldTossWeapon_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.InCombat
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXPawn_PlayerMP_Vanguard_Volus::InCombat ( )
{
	static UFunction* pFnInCombat = NULL;

	if ( ! pFnInCombat )
		pFnInCombat = (UFunction*) UObject::GObjObjects()->Data[ 111989 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execInCombat_Parms InCombat_Parms;

	this->ProcessEvent ( pFnInCombat, &InCombat_Parms, NULL );

	return InCombat_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ASFXPawn_PlayerMP_Vanguard_Volus::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 111983 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.PossessedBy
// [0x00020002] 
// Parameters infos:
// class AController*             C                              ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::PossessedBy ( class AController* C, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 111980 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execPossessedBy_Parms PossessedBy_Parms;
	PossessedBy_Parms.C = C;
	PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadWeaponModData
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::LoadWeaponModData ( )
{
	static UFunction* pFnLoadWeaponModData = NULL;

	if ( ! pFnLoadWeaponModData )
		pFnLoadWeaponModData = (UFunction*) UObject::GObjObjects()->Data[ 111970 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execLoadWeaponModData_Parms LoadWeaponModData_Parms;

	this->ProcessEvent ( pFnLoadWeaponModData, &LoadWeaponModData_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadPowerData
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::LoadPowerData ( )
{
	static UFunction* pFnLoadPowerData = NULL;

	if ( ! pFnLoadPowerData )
		pFnLoadPowerData = (UFunction*) UObject::GObjObjects()->Data[ 111955 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execLoadPowerData_Parms LoadPowerData_Parms;

	this->ProcessEvent ( pFnLoadPowerData, &LoadPowerData_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.IsTestFrameworkSetupComplete
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXPawn_PlayerMP_Vanguard_Volus::IsTestFrameworkSetupComplete ( )
{
	static UFunction* pFnIsTestFrameworkSetupComplete = NULL;

	if ( ! pFnIsTestFrameworkSetupComplete )
		pFnIsTestFrameworkSetupComplete = (UFunction*) UObject::GObjObjects()->Data[ 111953 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execIsTestFrameworkSetupComplete_Parms IsTestFrameworkSetupComplete_Parms;

	this->ProcessEvent ( pFnIsTestFrameworkSetupComplete, &IsTestFrameworkSetupComplete_Parms, NULL );

	return IsTestFrameworkSetupComplete_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadWeapons
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::LoadWeapons ( )
{
	static UFunction* pFnLoadWeapons = NULL;

	if ( ! pFnLoadWeapons )
		pFnLoadWeapons = (UFunction*) UObject::GObjObjects()->Data[ 111945 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execLoadWeapons_Parms LoadWeapons_Parms;

	this->ProcessEvent ( pFnLoadWeapons, &LoadWeapons_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.CreateWeapons
// [0x00024002] 
// Parameters infos:
// class USFXLoadoutData*         ChkLoadout                     ( CPF_Parm )
// unsigned long                  bForceFromEngineLoadout        ( CPF_OptionalParm | CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::CreateWeapons ( class USFXLoadoutData* ChkLoadout, unsigned long bForceFromEngineLoadout )
{
	static UFunction* pFnCreateWeapons = NULL;

	if ( ! pFnCreateWeapons )
		pFnCreateWeapons = (UFunction*) UObject::GObjObjects()->Data[ 111942 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execCreateWeapons_Parms CreateWeapons_Parms;
	CreateWeapons_Parms.ChkLoadout = ChkLoadout;
	CreateWeapons_Parms.bForceFromEngineLoadout = bForceFromEngineLoadout;

	this->ProcessEvent ( pFnCreateWeapons, &CreateWeapons_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.GetFullName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ASFXPawn_PlayerMP_Vanguard_Volus::GetFullName ( )
{
	static UFunction* pFnGetFullName = NULL;

	if ( ! pFnGetFullName )
		pFnGetFullName = (UFunction*) UObject::GObjObjects()->Data[ 111940 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execGetFullName_Parms GetFullName_Parms;

	this->ProcessEvent ( pFnGetFullName, &GetFullName_Parms, NULL );

	return GetFullName_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.DeferredSetRichPresence
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::DeferredSetRichPresence ( )
{
	static UFunction* pFnDeferredSetRichPresence = NULL;

	if ( ! pFnDeferredSetRichPresence )
		pFnDeferredSetRichPresence = (UFunction*) UObject::GObjObjects()->Data[ 111939 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execDeferredSetRichPresence_Parms DeferredSetRichPresence_Parms;

	this->ProcessEvent ( pFnDeferredSetRichPresence, &DeferredSetRichPresence_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.StopLoadingMovie
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::StopLoadingMovie ( )
{
	static UFunction* pFnStopLoadingMovie = NULL;

	if ( ! pFnStopLoadingMovie )
		pFnStopLoadingMovie = (UFunction*) UObject::GObjObjects()->Data[ 111937 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execStopLoadingMovie_Parms StopLoadingMovie_Parms;

	this->ProcessEvent ( pFnStopLoadingMovie, &StopLoadingMovie_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.DeferredPostBeginPlay
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::DeferredPostBeginPlay ( )
{
	static UFunction* pFnDeferredPostBeginPlay = NULL;

	if ( ! pFnDeferredPostBeginPlay )
		pFnDeferredPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 111904 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execDeferredPostBeginPlay_Parms DeferredPostBeginPlay_Parms;

	this->ProcessEvent ( pFnDeferredPostBeginPlay, &DeferredPostBeginPlay_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 111902 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ServerPermaDeath
// [0x002200C2] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::ServerPermaDeath ( )
{
	static UFunction* pFnServerPermaDeath = NULL;

	if ( ! pFnServerPermaDeath )
		pFnServerPermaDeath = (UFunction*) UObject::GObjObjects()->Data[ 111899 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execServerPermaDeath_Parms ServerPermaDeath_Parms;

	this->ProcessEvent ( pFnServerPermaDeath, &ServerPermaDeath_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.PermaDeath
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::PermaDeath ( )
{
	static UFunction* pFnPermaDeath = NULL;

	if ( ! pFnPermaDeath )
		pFnPermaDeath = (UFunction*) UObject::GObjObjects()->Data[ 111897 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execPermaDeath_Parms PermaDeath_Parms;

	this->ProcessEvent ( pFnPermaDeath, &PermaDeath_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.StartSpectatorCam
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::StartSpectatorCam ( )
{
	static UFunction* pFnStartSpectatorCam = NULL;

	if ( ! pFnStartSpectatorCam )
		pFnStartSpectatorCam = (UFunction*) UObject::GObjObjects()->Data[ 111895 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execStartSpectatorCam_Parms StartSpectatorCam_Parms;

	this->ProcessEvent ( pFnStartSpectatorCam, &StartSpectatorCam_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.PermaDeadChanged
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::PermaDeadChanged ( )
{
	static UFunction* pFnPermaDeadChanged = NULL;

	if ( ! pFnPermaDeadChanged )
		pFnPermaDeadChanged = (UFunction*) UObject::GObjObjects()->Data[ 111891 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execPermaDeadChanged_Parms PermaDeadChanged_Parms;

	this->ProcessEvent ( pFnPermaDeadChanged, &PermaDeadChanged_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.Resurrect
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          PercentOfHealthRegained        ( CPF_Parm )
// unsigned long                  bIsInstantaneous               ( CPF_Parm )

bool ASFXPawn_PlayerMP_Vanguard_Volus::eventResurrect ( float PercentOfHealthRegained, unsigned long bIsInstantaneous )
{
	static UFunction* pFnResurrect = NULL;

	if ( ! pFnResurrect )
		pFnResurrect = (UFunction*) UObject::GObjObjects()->Data[ 111887 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_eventResurrect_Parms Resurrect_Parms;
	Resurrect_Parms.PercentOfHealthRegained = PercentOfHealthRegained;
	Resurrect_Parms.bIsInstantaneous = bIsInstantaneous;

	this->ProcessEvent ( pFnResurrect, &Resurrect_Parms, NULL );

	return Resurrect_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.PreClientTravel
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::PreClientTravel ( )
{
	static UFunction* pFnPreClientTravel = NULL;

	if ( ! pFnPreClientTravel )
		pFnPreClientTravel = (UFunction*) UObject::GObjObjects()->Data[ 111884 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execPreClientTravel_Parms PreClientTravel_Parms;

	this->ProcessEvent ( pFnPreClientTravel, &PreClientTravel_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.IsReadyForExecution
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class Asfxpawn*                Killer                         ( CPF_Parm )

bool ASFXPawn_PlayerMP_Vanguard_Volus::IsReadyForExecution ( class Asfxpawn* Killer )
{
	static UFunction* pFnIsReadyForExecution = NULL;

	if ( ! pFnIsReadyForExecution )
		pFnIsReadyForExecution = (UFunction*) UObject::GObjObjects()->Data[ 111880 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execIsReadyForExecution_Parms IsReadyForExecution_Parms;
	IsReadyForExecution_Parms.Killer = Killer;

	this->ProcessEvent ( pFnIsReadyForExecution, &IsReadyForExecution_Parms, NULL );

	return IsReadyForExecution_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.IsDeadUpdated
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::IsDeadUpdated ( )
{
	static UFunction* pFnIsDeadUpdated = NULL;

	if ( ! pFnIsDeadUpdated )
		pFnIsDeadUpdated = (UFunction*) UObject::GObjObjects()->Data[ 111850 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execIsDeadUpdated_Parms IsDeadUpdated_Parms;

	this->ProcessEvent ( pFnIsDeadUpdated, &IsDeadUpdated_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.StartRevive
// [0x00020102] 
// Parameters infos:
// class ASFXPawn_PlayerParty*    TargetPawn                     ( CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::StartRevive ( class ASFXPawn_PlayerParty* TargetPawn )
{
	static UFunction* pFnStartRevive = NULL;

	if ( ! pFnStartRevive )
		pFnStartRevive = (UFunction*) UObject::GObjObjects()->Data[ 111848 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execStartRevive_Parms StartRevive_Parms;
	StartRevive_Parms.TargetPawn = TargetPawn;

	this->ProcessEvent ( pFnStartRevive, &StartRevive_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.FinalizeProcessFellOutOfWorld
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::FinalizeProcessFellOutOfWorld ( )
{
	static UFunction* pFnFinalizeProcessFellOutOfWorld = NULL;

	if ( ! pFnFinalizeProcessFellOutOfWorld )
		pFnFinalizeProcessFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 111846 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execFinalizeProcessFellOutOfWorld_Parms FinalizeProcessFellOutOfWorld_Parms;

	this->ProcessEvent ( pFnFinalizeProcessFellOutOfWorld, &FinalizeProcessFellOutOfWorld_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ServerFellOutOfWorldImpl
// [0x002200C2] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::ServerFellOutOfWorldImpl ( )
{
	static UFunction* pFnServerFellOutOfWorldImpl = NULL;

	if ( ! pFnServerFellOutOfWorldImpl )
		pFnServerFellOutOfWorldImpl = (UFunction*) UObject::GObjObjects()->Data[ 111847 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execServerFellOutOfWorldImpl_Parms ServerFellOutOfWorldImpl_Parms;

	this->ProcessEvent ( pFnServerFellOutOfWorldImpl, &ServerFellOutOfWorldImpl_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.FellOutOfWorldImpl
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::eventFellOutOfWorldImpl ( )
{
	static UFunction* pFnFellOutOfWorldImpl = NULL;

	if ( ! pFnFellOutOfWorldImpl )
		pFnFellOutOfWorldImpl = (UFunction*) UObject::GObjObjects()->Data[ 111844 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_eventFellOutOfWorldImpl_Parms FellOutOfWorldImpl_Parms;

	this->ProcessEvent ( pFnFellOutOfWorldImpl, &FellOutOfWorldImpl_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.BioBaseRemovedFromWorld
// [0x00020100] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::BioBaseRemovedFromWorld ( )
{
	static UFunction* pFnBioBaseRemovedFromWorld = NULL;

	if ( ! pFnBioBaseRemovedFromWorld )
		pFnBioBaseRemovedFromWorld = (UFunction*) UObject::GObjObjects()->Data[ 111843 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execBioBaseRemovedFromWorld_Parms BioBaseRemovedFromWorld_Parms;

	this->ProcessEvent ( pFnBioBaseRemovedFromWorld, &BioBaseRemovedFromWorld_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.OutsideWorldBounds
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::OutsideWorldBounds ( )
{
	static UFunction* pFnOutsideWorldBounds = NULL;

	if ( ! pFnOutsideWorldBounds )
		pFnOutsideWorldBounds = (UFunction*) UObject::GObjObjects()->Data[ 111842 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execOutsideWorldBounds_Parms OutsideWorldBounds_Parms;

	this->ProcessEvent ( pFnOutsideWorldBounds, &OutsideWorldBounds_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.FellOutOfWorld
// [0x00020102] 
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::FellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 111840 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ApplyCustomizationToActor
// [0x00024002] 
// Parameters infos:
// class AActor*                  InTarget                       ( CPF_Parm )
// class USFXCustomizationInstance* InSettings                     ( CPF_OptionalParm | CPF_Parm )
// int                            UIWorldConfigFlags             ( CPF_OptionalParm | CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::ApplyCustomizationToActor ( class AActor* InTarget, class USFXCustomizationInstance* InSettings, int UIWorldConfigFlags )
{
	static UFunction* pFnApplyCustomizationToActor = NULL;

	if ( ! pFnApplyCustomizationToActor )
		pFnApplyCustomizationToActor = (UFunction*) UObject::GObjObjects()->Data[ 111836 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execApplyCustomizationToActor_Parms ApplyCustomizationToActor_Parms;
	ApplyCustomizationToActor_Parms.InTarget = InTarget;
	ApplyCustomizationToActor_Parms.InSettings = InSettings;
	ApplyCustomizationToActor_Parms.UIWorldConfigFlags = UIWorldConfigFlags;

	this->ProcessEvent ( pFnApplyCustomizationToActor, &ApplyCustomizationToActor_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.GetMPAppearanceVariables
// [0x00420102] 
// Parameters infos:
// int                            Tint1                          ( CPF_Parm | CPF_OutParm )
// int                            Tint2                          ( CPF_Parm | CPF_OutParm )
// int                            Pattern                        ( CPF_Parm | CPF_OutParm )
// int                            PatternColor                   ( CPF_Parm | CPF_OutParm )
// int                            Phong                          ( CPF_Parm | CPF_OutParm )
// int                            Emissive                       ( CPF_Parm | CPF_OutParm )
// int                            SkinTone                       ( CPF_Parm | CPF_OutParm )

void ASFXPawn_PlayerMP_Vanguard_Volus::GetMPAppearanceVariables ( int* Tint1, int* Tint2, int* Pattern, int* PatternColor, int* Phong, int* Emissive, int* SkinTone )
{
	static UFunction* pFnGetMPAppearanceVariables = NULL;

	if ( ! pFnGetMPAppearanceVariables )
		pFnGetMPAppearanceVariables = (UFunction*) UObject::GObjObjects()->Data[ 111828 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execGetMPAppearanceVariables_Parms GetMPAppearanceVariables_Parms;

	this->ProcessEvent ( pFnGetMPAppearanceVariables, &GetMPAppearanceVariables_Parms, NULL );

	if ( Tint1 )
		*Tint1 = GetMPAppearanceVariables_Parms.Tint1;

	if ( Tint2 )
		*Tint2 = GetMPAppearanceVariables_Parms.Tint2;

	if ( Pattern )
		*Pattern = GetMPAppearanceVariables_Parms.Pattern;

	if ( PatternColor )
		*PatternColor = GetMPAppearanceVariables_Parms.PatternColor;

	if ( Phong )
		*Phong = GetMPAppearanceVariables_Parms.Phong;

	if ( Emissive )
		*Emissive = GetMPAppearanceVariables_Parms.Emissive;

	if ( SkinTone )
		*SkinTone = GetMPAppearanceVariables_Parms.SkinTone;
};

// Function sfxgamempcontent.sfxpawn_playermp.SetMPAppearanceVariables
// [0x00020102] 
// Parameters infos:
// int                            Tint1                          ( CPF_Parm )
// int                            Tint2                          ( CPF_Parm )
// int                            Pattern                        ( CPF_Parm )
// int                            PatternColor                   ( CPF_Parm )
// int                            Phong                          ( CPF_Parm )
// int                            Emissive                       ( CPF_Parm )
// int                            SkinTone                       ( CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::SetMPAppearanceVariables ( int Tint1, int Tint2, int Pattern, int PatternColor, int Phong, int Emissive, int SkinTone )
{
	static UFunction* pFnSetMPAppearanceVariables = NULL;

	if ( ! pFnSetMPAppearanceVariables )
		pFnSetMPAppearanceVariables = (UFunction*) UObject::GObjObjects()->Data[ 111820 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execSetMPAppearanceVariables_Parms SetMPAppearanceVariables_Parms;
	SetMPAppearanceVariables_Parms.Tint1 = Tint1;
	SetMPAppearanceVariables_Parms.Tint2 = Tint2;
	SetMPAppearanceVariables_Parms.Pattern = Pattern;
	SetMPAppearanceVariables_Parms.PatternColor = PatternColor;
	SetMPAppearanceVariables_Parms.Phong = Phong;
	SetMPAppearanceVariables_Parms.Emissive = Emissive;
	SetMPAppearanceVariables_Parms.SkinTone = SkinTone;

	this->ProcessEvent ( pFnSetMPAppearanceVariables, &SetMPAppearanceVariables_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateAppearance
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::UpdateAppearance ( )
{
	static UFunction* pFnUpdateAppearance = NULL;

	if ( ! pFnUpdateAppearance )
		pFnUpdateAppearance = (UFunction*) UObject::GObjObjects()->Data[ 111819 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execUpdateAppearance_Parms UpdateAppearance_Parms;

	this->ProcessEvent ( pFnUpdateAppearance, &UpdateAppearance_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.CopyPawnAppearance
// [0x00020102] 
// Parameters infos:
// class ABioPawn*                SourcePawn                     ( CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::CopyPawnAppearance ( class ABioPawn* SourcePawn )
{
	static UFunction* pFnCopyPawnAppearance = NULL;

	if ( ! pFnCopyPawnAppearance )
		pFnCopyPawnAppearance = (UFunction*) UObject::GObjObjects()->Data[ 111809 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execCopyPawnAppearance_Parms CopyPawnAppearance_Parms;
	CopyPawnAppearance_Parms.SourcePawn = SourcePawn;

	this->ProcessEvent ( pFnCopyPawnAppearance, &CopyPawnAppearance_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.CheckEnterCombat
// [0x00020000] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::CheckEnterCombat ( )
{
	static UFunction* pFnCheckEnterCombat = NULL;

	if ( ! pFnCheckEnterCombat )
		pFnCheckEnterCombat = (UFunction*) UObject::GObjObjects()->Data[ 111808 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execCheckEnterCombat_Parms CheckEnterCombat_Parms;

	this->ProcessEvent ( pFnCheckEnterCombat, &CheckEnterCombat_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.PlayerRevivedMessage
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::PlayerRevivedMessage ( )
{
	static UFunction* pFnPlayerRevivedMessage = NULL;

	if ( ! pFnPlayerRevivedMessage )
		pFnPlayerRevivedMessage = (UFunction*) UObject::GObjObjects()->Data[ 111805 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execPlayerRevivedMessage_Parms PlayerRevivedMessage_Parms;

	this->ProcessEvent ( pFnPlayerRevivedMessage, &PlayerRevivedMessage_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.PlayerKilledMessage
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_Vanguard_Volus::PlayerKilledMessage ( )
{
	static UFunction* pFnPlayerKilledMessage = NULL;

	if ( ! pFnPlayerKilledMessage )
		pFnPlayerKilledMessage = (UFunction*) UObject::GObjObjects()->Data[ 111800 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execPlayerKilledMessage_Parms PlayerKilledMessage_Parms;

	this->ProcessEvent ( pFnPlayerKilledMessage, &PlayerKilledMessage_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ASFXPawn_PlayerMP_Vanguard_Volus::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 111798 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.GetActorGameName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ASFXPawn_PlayerMP_Vanguard_Volus::GetActorGameName ( )
{
	static UFunction* pFnGetActorGameName = NULL;

	if ( ! pFnGetActorGameName )
		pFnGetActorGameName = (UFunction*) UObject::GObjObjects()->Data[ 111795 ];

	ASFXPawn_PlayerMP_Vanguard_Volus_execGetActorGameName_Parms GetActorGameName_Parms;

	this->ProcessEvent ( pFnGetActorGameName, &GetActorGameName_Parms, NULL );

	return GetActorGameName_Parms.ReturnValue;
};

// Function sfxgamecontent.SFXProjectile_PowerCustomAction_SuperSeeking.InitializeRotation
// [0x00020002] 
// Parameters infos:
// class APawn*                   oCasterPawn                    ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_BioticOrbs::InitializeRotation ( class APawn* oCasterPawn )
{
	static UFunction* pFnInitializeRotation = NULL;

	if ( ! pFnInitializeRotation )
		pFnInitializeRotation = (UFunction*) UObject::GObjObjects()->Data[ 129062 ];

	ASFXProjectile_PowerCustomAction_BioticOrbs_execInitializeRotation_Parms InitializeRotation_Parms;
	InitializeRotation_Parms.oCasterPawn = oCasterPawn;

	this->ProcessEvent ( pFnInitializeRotation, &InitializeRotation_Parms, NULL );
};

// Function sfxgamecontent.SFXProjectile_PowerCustomAction_SuperSeeking.TickAimRotation
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FVector                 SeekVector                     ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_BioticOrbs::TickAimRotation ( float DeltaTime, struct FVector SeekVector )
{
	static UFunction* pFnTickAimRotation = NULL;

	if ( ! pFnTickAimRotation )
		pFnTickAimRotation = (UFunction*) UObject::GObjObjects()->Data[ 129055 ];

	ASFXProjectile_PowerCustomAction_BioticOrbs_execTickAimRotation_Parms TickAimRotation_Parms;
	TickAimRotation_Parms.DeltaTime = DeltaTime;
	memcpy ( &TickAimRotation_Parms.SeekVector, &SeekVector, 0xC );

	this->ProcessEvent ( pFnTickAimRotation, &TickAimRotation_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif