/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentlivekismet_classes.h
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

// Class sfxgamecontentlivekismet.BioSeqAct_ShowSplash
// 0x0008 (0x00B8 - 0x00B0)
class UBioSeqAct_ShowSplash : public USequenceAction
{
public:
	class UGFxMovieInfo*                               m_oGuiReferenced;                                 		// 0x00B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowLegal : 1;                                   		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 105587 ];

		return pClassPointer;
	};

	void Activated ( );
};

UClass* UBioSeqAct_ShowSplash::pClassPointer = NULL;

// Class sfxgamecontentlivekismet.BioSeqAct_ShowMainMenu
// 0x000C (0x00BC - 0x00B0)
class UBioSeqAct_ShowMainMenu : public USequenceAction
{
public:
	TArray< class UGFxMovieInfo* >                     m_GuiResources;                                   		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 105809 ];

		return pClassPointer;
	};

	void Activated ( );
};

UClass* UBioSeqAct_ShowMainMenu::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif