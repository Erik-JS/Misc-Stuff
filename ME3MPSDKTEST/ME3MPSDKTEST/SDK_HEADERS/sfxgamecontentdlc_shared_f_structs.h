/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_shared_f_structs.h
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

// Function SFXGame.SFXWeaponMod.GetGameEffectClass
// [0x00020002] 
struct USFXWeaponMod_SMGPenetration_execGetGameEffectClass_Parms
{
	struct FName                                       EffectClassName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXWeaponMod.GetGameEffectDisplayValue
// [0x00020002] 
struct USFXWeaponMod_SMGPenetration_execGetGameEffectDisplayValue_Parms
{
	int                                                GameEffectIdx;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXWeaponMod.OnVisibilityChanged
// [0x00020000] 
struct USFXWeaponMod_SMGPenetration_execOnVisibilityChanged_Parms
{
	unsigned long                                      bHidden : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXGame.SFXWeaponMod.RemoveEffects
// [0x00020002] 
struct USFXWeaponMod_SMGPenetration_execRemoveEffects_Parms
{
};

// Function SFXGame.SFXWeaponMod.ApplyEffects
// [0x00020002] 
struct USFXWeaponMod_SMGPenetration_execApplyEffects_Parms
{
};

// Function SFXGame.SFXWeaponMod.Upgrade
// [0x00026002] 
struct USFXWeaponMod_SMGPenetration_execUpgrade_Parms
{
	class ABioPawn*                                    Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNoNotification : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               Eng;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             nRank;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     oController;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FName                                    PlayerVariable;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGame.SFXWeaponMod.LoadModClass
// [0x00022003] ( FUNC_Final )
struct USFXWeaponMod_SMGPenetration_execLoadModClass_Parms
{
	struct FString                                     ModClassName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGame.SFXWeaponMod.GetModDescription
// [0x00022002] 
struct USFXWeaponMod_SMGPenetration_execGetModDescription_Parms
{
	int                                                nLevel;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             nToken;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  sFinalString;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  sTokenString;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGame.SFXWeaponMod.GetModName
// [0x00026002] 
struct USFXWeaponMod_SMGPenetration_execGetModName_Parms
{
	int                                                nLevel;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShortForm : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  sFinalString;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Custom0;                                          		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Custom1;                                          		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGame.SFXWeaponMod.IsUnlocked
// [0x00422002] 
struct USFXWeaponMod_SMGPenetration_execIsUnlocked_Parms
{
	int                                                nUnlockLevel;                                     		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               Engine;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXWeaponMod.GetMaxRank
// [0x00022002] 
struct USFXWeaponMod_SMGPenetration_execGetMaxRank_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGame.SFXWeaponMod.GetGameEffectClass
// [0x00020002] 
struct USFXWeaponMod_SMGStabilization_execGetGameEffectClass_Parms
{
	struct FName                                       EffectClassName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXWeaponMod.GetGameEffectDisplayValue
// [0x00020002] 
struct USFXWeaponMod_SMGStabilization_execGetGameEffectDisplayValue_Parms
{
	int                                                GameEffectIdx;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXWeaponMod.OnVisibilityChanged
// [0x00020000] 
struct USFXWeaponMod_SMGStabilization_execOnVisibilityChanged_Parms
{
	unsigned long                                      bHidden : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXGame.SFXWeaponMod.RemoveEffects
// [0x00020002] 
struct USFXWeaponMod_SMGStabilization_execRemoveEffects_Parms
{
};

// Function SFXGame.SFXWeaponMod.ApplyEffects
// [0x00020002] 
struct USFXWeaponMod_SMGStabilization_execApplyEffects_Parms
{
};

// Function SFXGame.SFXWeaponMod.Upgrade
// [0x00026002] 
struct USFXWeaponMod_SMGStabilization_execUpgrade_Parms
{
	class ABioPawn*                                    Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNoNotification : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               Eng;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             nRank;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     oController;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FName                                    PlayerVariable;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGame.SFXWeaponMod.LoadModClass
// [0x00022003] ( FUNC_Final )
struct USFXWeaponMod_SMGStabilization_execLoadModClass_Parms
{
	struct FString                                     ModClassName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGame.SFXWeaponMod.GetModDescription
// [0x00022002] 
struct USFXWeaponMod_SMGStabilization_execGetModDescription_Parms
{
	int                                                nLevel;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             nToken;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  sFinalString;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  sTokenString;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGame.SFXWeaponMod.GetModName
// [0x00026002] 
struct USFXWeaponMod_SMGStabilization_execGetModName_Parms
{
	int                                                nLevel;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShortForm : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  sFinalString;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Custom0;                                          		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Custom1;                                          		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGame.SFXWeaponMod.IsUnlocked
// [0x00422002] 
struct USFXWeaponMod_SMGStabilization_execIsUnlocked_Parms
{
	int                                                nUnlockLevel;                                     		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               Engine;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXWeaponMod.GetMaxRank
// [0x00022002] 
struct USFXWeaponMod_SMGStabilization_execGetMaxRank_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif