#include "header.h"

USFXGUI_MPHUD *mphud;
USFXOnlineComponentOrigin *origincomp;
Asfxgrimp *grimp;
Asfxgrimp_lobby *grimp_lobby;
wchar_t presencetext[256];
wchar_t textmap[23][16] = { L"Unknown", L"map1", L"Dagger", L"Ghost", L"Giant",
							L"Reactor", L"map6", L"Glacier", L"White", L"Condor",
							L"Hydra", L"Jade", L"map12", L"Goddess", L"Rio", 
							L"Vancouver", L"London", L"Glacier(H)", L"Dagger(H)", L"Reactor(H)",
							L"Ghost(H)", L"Giant(H)", L"White(H)" };
wchar_t textenemy[5][16] = { L"Unknown", L"Cerberus", L"Geth", L"Reaper", L"Collector" };
wchar_t textdif[4][16] = { L"Bronze", L"Silver", L"Gold", L"Platinum" };
DWORD lobbyPointer;

bool checkGameHasFocus()
{
	HWND fgWindow = GetForegroundWindow();
	DWORD fgPID;
	if(GetWindowThreadProcessId(fgWindow, &fgPID) == 0)
		return false;
	return (fgPID == GetCurrentProcessId());
}

bool checkKeyPress(short keystate)
{
	bool bKeyPress;
	bool bKeyDown;
	bKeyDown = ((keystate & 0x8000) == 0x8000);
	bKeyPress = ((keystate & 0x1) == 0x1);
	return (bKeyPress && bKeyDown);
}

DWORD WINAPI KeyListenerThread(LPVOID lpParam)
{
	do
	{
		//Sleep(10);
		if(!checkGameHasFocus())
			continue;
		if(checkKeyPress(GetAsyncKeyState(VK_F2)))
		{
			//mphud = (USFXGUI_MPHUD*)UObject::FindObject<UObject>("SFXGUI_MPHUD SFXGameViewportClient.SFXGUIInteraction.SFXGUI_MPHUD");
			origincomp = (USFXOnlineComponentOrigin*)UObject::FindObject<UObject>("SFXOnlineComponentOrigin Transient.SFXOnlineComponentOrigin");
			grimp = (Asfxgrimp*)UObject::FindObject<UObject>("sfxgrimp TheWorld.PersistentLevel.sfxgrimp");
			grimp_lobby =(Asfxgrimp_lobby*)UObject::FindObject<UObject>("sfxgrimp_lobby TheWorld.PersistentLevel.sfxgrimp_lobby");
			if (origincomp && grimp_lobby)
			{
				if(*(int*)lobbyPointer != 0)
					wsprintfW (presencetext, L"MP Lobby: %ls/%ls/%ls", textmap[grimp_lobby->MapSetting], textenemy[grimp_lobby->EnemySetting], textdif[grimp_lobby->DifficultySetting]);
				else
					wsprintfW (presencetext, L"MP");
				origincomp->SetRichPresence(presencetext, L"");
			}
			else if (origincomp && grimp)
			{
				wsprintfW (presencetext, L"MP Match: %ls/%ls/%ls", textmap[grimp->MapSetting], textenemy[grimp->EnemySetting], textdif[grimp->DifficultySetting]);
				origincomp->SetRichPresence(presencetext, L"");
			}
			else
			{
				MessageBeep(0);
			}
		}
		if(checkKeyPress(GetAsyncKeyState(VK_F3)))
		{
			origincomp = (USFXOnlineComponentOrigin*)UObject::FindObject<UObject>("SFXOnlineComponentOrigin Transient.SFXOnlineComponentOrigin");
			if (origincomp)
				origincomp->SetRichPresence(L"", L"");
		}
	} while (true);
	return 0;
}


bool __stdcall DllMain(HANDLE process, DWORD reason, LPVOID lpReserved){
	if (reason == DLL_PROCESS_ATTACH)
	{
		lobbyPointer = (DWORD)GetModuleHandle(NULL) + 0x152698C;
		CreateThread(0, 0, &KeyListenerThread, 0, 0, 0);
		return 1;
	}
	else if (reason == DLL_PROCESS_DETACH)
	{
		return 1;
	}
	return 0;
}