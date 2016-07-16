/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_shared_functions.h
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

// Function SFXGame.SFXWeaponMod.GetGameEffectClass
// [0x00020002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   EffectClassName                ( CPF_Parm )

class UClass* USFXWeaponMod_SMGPenetration::GetGameEffectClass ( struct FName EffectClassName )
{
	static UFunction* pFnGetGameEffectClass = NULL;

	if ( ! pFnGetGameEffectClass )
		pFnGetGameEffectClass = (UFunction*) UObject::GObjObjects()->Data[ 72777 ];

	USFXWeaponMod_SMGPenetration_execGetGameEffectClass_Parms GetGameEffectClass_Parms;
	memcpy ( &GetGameEffectClass_Parms.EffectClassName, &EffectClassName, 0x8 );

	this->ProcessEvent ( pFnGetGameEffectClass, &GetGameEffectClass_Parms, NULL );

	return GetGameEffectClass_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.GetGameEffectDisplayValue
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            GameEffectIdx                  ( CPF_Parm )

float USFXWeaponMod_SMGPenetration::GetGameEffectDisplayValue ( int GameEffectIdx )
{
	static UFunction* pFnGetGameEffectDisplayValue = NULL;

	if ( ! pFnGetGameEffectDisplayValue )
		pFnGetGameEffectDisplayValue = (UFunction*) UObject::GObjObjects()->Data[ 72773 ];

	USFXWeaponMod_SMGPenetration_execGetGameEffectDisplayValue_Parms GetGameEffectDisplayValue_Parms;
	GetGameEffectDisplayValue_Parms.GameEffectIdx = GameEffectIdx;

	this->ProcessEvent ( pFnGetGameEffectDisplayValue, &GetGameEffectDisplayValue_Parms, NULL );

	return GetGameEffectDisplayValue_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.OnVisibilityChanged
// [0x00020000] 
// Parameters infos:
// unsigned long                  bHidden                        ( CPF_Parm )

void USFXWeaponMod_SMGPenetration::OnVisibilityChanged ( unsigned long bHidden )
{
	static UFunction* pFnOnVisibilityChanged = NULL;

	if ( ! pFnOnVisibilityChanged )
		pFnOnVisibilityChanged = (UFunction*) UObject::GObjObjects()->Data[ 72771 ];

	USFXWeaponMod_SMGPenetration_execOnVisibilityChanged_Parms OnVisibilityChanged_Parms;
	OnVisibilityChanged_Parms.bHidden = bHidden;

	this->ProcessEvent ( pFnOnVisibilityChanged, &OnVisibilityChanged_Parms, NULL );
};

// Function SFXGame.SFXWeaponMod.RemoveEffects
// [0x00020002] 
// Parameters infos:

void USFXWeaponMod_SMGPenetration::RemoveEffects ( )
{
	static UFunction* pFnRemoveEffects = NULL;

	if ( ! pFnRemoveEffects )
		pFnRemoveEffects = (UFunction*) UObject::GObjObjects()->Data[ 72770 ];

	USFXWeaponMod_SMGPenetration_execRemoveEffects_Parms RemoveEffects_Parms;

	this->ProcessEvent ( pFnRemoveEffects, &RemoveEffects_Parms, NULL );
};

// Function SFXGame.SFXWeaponMod.ApplyEffects
// [0x00020002] 
// Parameters infos:

void USFXWeaponMod_SMGPenetration::ApplyEffects ( )
{
	static UFunction* pFnApplyEffects = NULL;

	if ( ! pFnApplyEffects )
		pFnApplyEffects = (UFunction*) UObject::GObjObjects()->Data[ 72768 ];

	USFXWeaponMod_SMGPenetration_execApplyEffects_Parms ApplyEffects_Parms;

	this->ProcessEvent ( pFnApplyEffects, &ApplyEffects_Parms, NULL );
};

// Function SFXGame.SFXWeaponMod.Upgrade
// [0x00026002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                Instigator                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNoNotification                ( CPF_OptionalParm | CPF_Parm )

bool USFXWeaponMod_SMGPenetration::Upgrade ( class ABioPawn* Instigator, unsigned long bNoNotification )
{
	static UFunction* pFnUpgrade = NULL;

	if ( ! pFnUpgrade )
		pFnUpgrade = (UFunction*) UObject::GObjObjects()->Data[ 72757 ];

	USFXWeaponMod_SMGPenetration_execUpgrade_Parms Upgrade_Parms;
	Upgrade_Parms.Instigator = Instigator;
	Upgrade_Parms.bNoNotification = bNoNotification;

	this->ProcessEvent ( pFnUpgrade, &Upgrade_Parms, NULL );

	return Upgrade_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.LoadModClass
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ModClassName                   ( CPF_Parm | CPF_NeedCtorLink )

class UClass* USFXWeaponMod_SMGPenetration::LoadModClass ( struct FString ModClassName )
{
	static UFunction* pFnLoadModClass = NULL;

	if ( ! pFnLoadModClass )
		pFnLoadModClass = (UFunction*) UObject::GObjObjects()->Data[ 43499 ];

	USFXWeaponMod_SMGPenetration_execLoadModClass_Parms LoadModClass_Parms;
	memcpy ( &LoadModClass_Parms.ModClassName, &ModClassName, 0xC );

	this->ProcessEvent ( pFnLoadModClass, &LoadModClass_Parms, NULL );

	return LoadModClass_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.GetModDescription
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            nLevel                         ( CPF_Parm )

struct FString USFXWeaponMod_SMGPenetration::GetModDescription ( int nLevel )
{
	static UFunction* pFnGetModDescription = NULL;

	if ( ! pFnGetModDescription )
		pFnGetModDescription = (UFunction*) UObject::GObjObjects()->Data[ 72748 ];

	USFXWeaponMod_SMGPenetration_execGetModDescription_Parms GetModDescription_Parms;
	GetModDescription_Parms.nLevel = nLevel;

	this->ProcessEvent ( pFnGetModDescription, &GetModDescription_Parms, NULL );

	return GetModDescription_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.GetModName
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            nLevel                         ( CPF_Parm )
// unsigned long                  bShortForm                     ( CPF_OptionalParm | CPF_Parm )

struct FString USFXWeaponMod_SMGPenetration::GetModName ( int nLevel, unsigned long bShortForm )
{
	static UFunction* pFnGetModName = NULL;

	if ( ! pFnGetModName )
		pFnGetModName = (UFunction*) UObject::GObjObjects()->Data[ 45583 ];

	USFXWeaponMod_SMGPenetration_execGetModName_Parms GetModName_Parms;
	GetModName_Parms.nLevel = nLevel;
	GetModName_Parms.bShortForm = bShortForm;

	this->ProcessEvent ( pFnGetModName, &GetModName_Parms, NULL );

	return GetModName_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.IsUnlocked
// [0x00422002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUnlockLevel                   ( CPF_Parm | CPF_OutParm )

bool USFXWeaponMod_SMGPenetration::IsUnlocked ( int* nUnlockLevel )
{
	static UFunction* pFnIsUnlocked = NULL;

	if ( ! pFnIsUnlocked )
		pFnIsUnlocked = (UFunction*) UObject::GObjObjects()->Data[ 43501 ];

	USFXWeaponMod_SMGPenetration_execIsUnlocked_Parms IsUnlocked_Parms;

	this->ProcessEvent ( pFnIsUnlocked, &IsUnlocked_Parms, NULL );

	if ( nUnlockLevel )
		*nUnlockLevel = IsUnlocked_Parms.nUnlockLevel;

	return IsUnlocked_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.GetMaxRank
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWeaponMod_SMGPenetration::GetMaxRank ( )
{
	static UFunction* pFnGetMaxRank = NULL;

	if ( ! pFnGetMaxRank )
		pFnGetMaxRank = (UFunction*) UObject::GObjObjects()->Data[ 72736 ];

	USFXWeaponMod_SMGPenetration_execGetMaxRank_Parms GetMaxRank_Parms;

	this->ProcessEvent ( pFnGetMaxRank, &GetMaxRank_Parms, NULL );

	return GetMaxRank_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.GetGameEffectClass
// [0x00020002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   EffectClassName                ( CPF_Parm )

class UClass* USFXWeaponMod_SMGStabilization::GetGameEffectClass ( struct FName EffectClassName )
{
	static UFunction* pFnGetGameEffectClass = NULL;

	if ( ! pFnGetGameEffectClass )
		pFnGetGameEffectClass = (UFunction*) UObject::GObjObjects()->Data[ 72777 ];

	USFXWeaponMod_SMGStabilization_execGetGameEffectClass_Parms GetGameEffectClass_Parms;
	memcpy ( &GetGameEffectClass_Parms.EffectClassName, &EffectClassName, 0x8 );

	this->ProcessEvent ( pFnGetGameEffectClass, &GetGameEffectClass_Parms, NULL );

	return GetGameEffectClass_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.GetGameEffectDisplayValue
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            GameEffectIdx                  ( CPF_Parm )

float USFXWeaponMod_SMGStabilization::GetGameEffectDisplayValue ( int GameEffectIdx )
{
	static UFunction* pFnGetGameEffectDisplayValue = NULL;

	if ( ! pFnGetGameEffectDisplayValue )
		pFnGetGameEffectDisplayValue = (UFunction*) UObject::GObjObjects()->Data[ 72773 ];

	USFXWeaponMod_SMGStabilization_execGetGameEffectDisplayValue_Parms GetGameEffectDisplayValue_Parms;
	GetGameEffectDisplayValue_Parms.GameEffectIdx = GameEffectIdx;

	this->ProcessEvent ( pFnGetGameEffectDisplayValue, &GetGameEffectDisplayValue_Parms, NULL );

	return GetGameEffectDisplayValue_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.OnVisibilityChanged
// [0x00020000] 
// Parameters infos:
// unsigned long                  bHidden                        ( CPF_Parm )

void USFXWeaponMod_SMGStabilization::OnVisibilityChanged ( unsigned long bHidden )
{
	static UFunction* pFnOnVisibilityChanged = NULL;

	if ( ! pFnOnVisibilityChanged )
		pFnOnVisibilityChanged = (UFunction*) UObject::GObjObjects()->Data[ 72771 ];

	USFXWeaponMod_SMGStabilization_execOnVisibilityChanged_Parms OnVisibilityChanged_Parms;
	OnVisibilityChanged_Parms.bHidden = bHidden;

	this->ProcessEvent ( pFnOnVisibilityChanged, &OnVisibilityChanged_Parms, NULL );
};

// Function SFXGame.SFXWeaponMod.RemoveEffects
// [0x00020002] 
// Parameters infos:

void USFXWeaponMod_SMGStabilization::RemoveEffects ( )
{
	static UFunction* pFnRemoveEffects = NULL;

	if ( ! pFnRemoveEffects )
		pFnRemoveEffects = (UFunction*) UObject::GObjObjects()->Data[ 72770 ];

	USFXWeaponMod_SMGStabilization_execRemoveEffects_Parms RemoveEffects_Parms;

	this->ProcessEvent ( pFnRemoveEffects, &RemoveEffects_Parms, NULL );
};

// Function SFXGame.SFXWeaponMod.ApplyEffects
// [0x00020002] 
// Parameters infos:

void USFXWeaponMod_SMGStabilization::ApplyEffects ( )
{
	static UFunction* pFnApplyEffects = NULL;

	if ( ! pFnApplyEffects )
		pFnApplyEffects = (UFunction*) UObject::GObjObjects()->Data[ 72768 ];

	USFXWeaponMod_SMGStabilization_execApplyEffects_Parms ApplyEffects_Parms;

	this->ProcessEvent ( pFnApplyEffects, &ApplyEffects_Parms, NULL );
};

// Function SFXGame.SFXWeaponMod.Upgrade
// [0x00026002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                Instigator                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNoNotification                ( CPF_OptionalParm | CPF_Parm )

bool USFXWeaponMod_SMGStabilization::Upgrade ( class ABioPawn* Instigator, unsigned long bNoNotification )
{
	static UFunction* pFnUpgrade = NULL;

	if ( ! pFnUpgrade )
		pFnUpgrade = (UFunction*) UObject::GObjObjects()->Data[ 72757 ];

	USFXWeaponMod_SMGStabilization_execUpgrade_Parms Upgrade_Parms;
	Upgrade_Parms.Instigator = Instigator;
	Upgrade_Parms.bNoNotification = bNoNotification;

	this->ProcessEvent ( pFnUpgrade, &Upgrade_Parms, NULL );

	return Upgrade_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.LoadModClass
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ModClassName                   ( CPF_Parm | CPF_NeedCtorLink )

class UClass* USFXWeaponMod_SMGStabilization::LoadModClass ( struct FString ModClassName )
{
	static UFunction* pFnLoadModClass = NULL;

	if ( ! pFnLoadModClass )
		pFnLoadModClass = (UFunction*) UObject::GObjObjects()->Data[ 43499 ];

	USFXWeaponMod_SMGStabilization_execLoadModClass_Parms LoadModClass_Parms;
	memcpy ( &LoadModClass_Parms.ModClassName, &ModClassName, 0xC );

	this->ProcessEvent ( pFnLoadModClass, &LoadModClass_Parms, NULL );

	return LoadModClass_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.GetModDescription
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            nLevel                         ( CPF_Parm )

struct FString USFXWeaponMod_SMGStabilization::GetModDescription ( int nLevel )
{
	static UFunction* pFnGetModDescription = NULL;

	if ( ! pFnGetModDescription )
		pFnGetModDescription = (UFunction*) UObject::GObjObjects()->Data[ 72748 ];

	USFXWeaponMod_SMGStabilization_execGetModDescription_Parms GetModDescription_Parms;
	GetModDescription_Parms.nLevel = nLevel;

	this->ProcessEvent ( pFnGetModDescription, &GetModDescription_Parms, NULL );

	return GetModDescription_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.GetModName
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            nLevel                         ( CPF_Parm )
// unsigned long                  bShortForm                     ( CPF_OptionalParm | CPF_Parm )

struct FString USFXWeaponMod_SMGStabilization::GetModName ( int nLevel, unsigned long bShortForm )
{
	static UFunction* pFnGetModName = NULL;

	if ( ! pFnGetModName )
		pFnGetModName = (UFunction*) UObject::GObjObjects()->Data[ 45583 ];

	USFXWeaponMod_SMGStabilization_execGetModName_Parms GetModName_Parms;
	GetModName_Parms.nLevel = nLevel;
	GetModName_Parms.bShortForm = bShortForm;

	this->ProcessEvent ( pFnGetModName, &GetModName_Parms, NULL );

	return GetModName_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.IsUnlocked
// [0x00422002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUnlockLevel                   ( CPF_Parm | CPF_OutParm )

bool USFXWeaponMod_SMGStabilization::IsUnlocked ( int* nUnlockLevel )
{
	static UFunction* pFnIsUnlocked = NULL;

	if ( ! pFnIsUnlocked )
		pFnIsUnlocked = (UFunction*) UObject::GObjObjects()->Data[ 43501 ];

	USFXWeaponMod_SMGStabilization_execIsUnlocked_Parms IsUnlocked_Parms;

	this->ProcessEvent ( pFnIsUnlocked, &IsUnlocked_Parms, NULL );

	if ( nUnlockLevel )
		*nUnlockLevel = IsUnlocked_Parms.nUnlockLevel;

	return IsUnlocked_Parms.ReturnValue;
};

// Function SFXGame.SFXWeaponMod.GetMaxRank
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWeaponMod_SMGStabilization::GetMaxRank ( )
{
	static UFunction* pFnGetMaxRank = NULL;

	if ( ! pFnGetMaxRank )
		pFnGetMaxRank = (UFunction*) UObject::GObjObjects()->Data[ 72736 ];

	USFXWeaponMod_SMGStabilization_execGetMaxRank_Parms GetMaxRank_Parms;

	this->ProcessEvent ( pFnGetMaxRank, &GetMaxRank_Parms, NULL );

	return GetMaxRank_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif