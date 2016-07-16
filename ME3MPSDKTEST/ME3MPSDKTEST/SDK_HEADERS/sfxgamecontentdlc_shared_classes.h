/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_shared_classes.h
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

// Class sfxgamecontentdlc_shared.SFXWeaponMod_SMGPenetration
// 0x0000 (0x00EE - 0x00EE)
class USFXWeaponMod_SMGPenetration : public USFXWeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139010 ];

		return pClassPointer;
	};

	class UClass* GetGameEffectClass ( struct FName EffectClassName );
	float GetGameEffectDisplayValue ( int GameEffectIdx );
	void OnVisibilityChanged ( unsigned long bHidden );
	void RemoveEffects ( );
	void ApplyEffects ( );
	bool Upgrade ( class ABioPawn* Instigator, unsigned long bNoNotification );
	class UClass* LoadModClass ( struct FString ModClassName );
	struct FString GetModDescription ( int nLevel );
	struct FString GetModName ( int nLevel, unsigned long bShortForm );
	bool IsUnlocked ( int* nUnlockLevel );
	int GetMaxRank ( );
};

UClass* USFXWeaponMod_SMGPenetration::pClassPointer = NULL;

// Class sfxgamecontentdlc_shared.SFXWeaponMod_SMGStabilization
// 0x0000 (0x00EE - 0x00EE)
class USFXWeaponMod_SMGStabilization : public USFXWeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139018 ];

		return pClassPointer;
	};

	class UClass* GetGameEffectClass ( struct FName EffectClassName );
	float GetGameEffectDisplayValue ( int GameEffectIdx );
	void OnVisibilityChanged ( unsigned long bHidden );
	void RemoveEffects ( );
	void ApplyEffects ( );
	bool Upgrade ( class ABioPawn* Instigator, unsigned long bNoNotification );
	class UClass* LoadModClass ( struct FString ModClassName );
	struct FString GetModDescription ( int nLevel );
	struct FString GetModName ( int nLevel, unsigned long bShortForm );
	bool IsUnlocked ( int* nUnlockLevel );
	int GetMaxRank ( );
};

UClass* USFXWeaponMod_SMGStabilization::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif