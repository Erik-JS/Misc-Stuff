#include "header.h"
#include <fstream>

USFXGUI_MPHUD *mphud;
USFXOnlineComponentOrigin *origincomp;
Asfxgrimp *grimp;
Asfxgrimp_lobby *grimp_lobby;
USFXWave_Horde *sfxwavehorde;
wchar_t presencetext[256];
wchar_t currentpresencetext[256];
wchar_t textmap[31][17] = { L"Unknown", L"map1", L"Dagger", L"Ghost", L"Giant",
							L"Reactor", L"map6", L"Glacier", L"White", L"Condor",
							L"Hydra", L"Jade", L"Gauntlet", L"Goddess", L"Rio",
							L"Vancouver", L"London", L"☣Glacier☣", L"☣Dagger☣", L"☣Reactor☣",
							L"☣Ghost☣", L"☣Giant☣", L"☣White☣", L"Original White", L"Original Glacier", L"Scorpio", L"Neptune", L"Forge", L"Maelstrom", L"Dragon", L"Athena" };
wchar_t textenemy[8][18] = { L"Unknown", L"Cerberus", L"Geth", L"Reaper", L"Collector", L"Original Cerberus", L"Original Geth", L"Original Reaper" };
wchar_t textdif[4][16] = { L"Bronze", L"Silver", L"Gold", L"Platinum" };
DWORD lobbyPointer;

bool checkGameHasFocus()
{
	HWND fgWindow = GetForegroundWindow();
	DWORD fgPID;
	if (GetWindowThreadProcessId(fgWindow, &fgPID) == 0)
		return false;
	return (fgPID == GetCurrentProcessId());
}

DWORD WINAPI RichPresenceUpdater(LPVOID lpParam)
{
	std::wofstream outfile;
	//outfile.open("originmpstatuslog.txt", std::ios_base::app);
	//outfile << "Starting Origin MP Status 2\n";
	do
	{
		Sleep(3000);
		if (!checkGameHasFocus())
			continue;
		origincomp = (USFXOnlineComponentOrigin*)UObject::FindObject<UObject>("SFXOnlineComponentOrigin Transient.SFXOnlineComponentOrigin");
		grimp = (Asfxgrimp*)UObject::FindObject<UObject>("sfxgrimp TheWorld.PersistentLevel.sfxgrimp");
		grimp_lobby = (Asfxgrimp_lobby*)UObject::FindObject<UObject>("sfxgrimp_lobby TheWorld.PersistentLevel.sfxgrimp_lobby");
		if (origincomp && grimp_lobby)
		{
			if (*(int*)lobbyPointer != 0) {
				//outfile << "MP and lobby pointer\n";
				//outfile.flush();
				wsprintfW(presencetext, L"MP Lobby: %ls/%ls/%ls", textmap[grimp_lobby->MapSetting], textenemy[grimp_lobby->EnemySetting], textdif[grimp_lobby->DifficultySetting]);
			}
			else {
				wsprintfW(presencetext, L"MP Main Menu");
				//outfile << "Only MP\n";
			}
			if (wcscmp(currentpresencetext, presencetext) != 0) {
				//difference
				bool result = origincomp->SetRichPresence(presencetext, L"");
				if (result == 1) {
					wcsncpy(currentpresencetext, presencetext, 256);
					//outfile << "Set new precence: " << presencetext << " " << result;
					//outfile << "\n";
					//outfile.flush();
				}
				else {
					//outfile << "Failed to set new precence: " << presencetext << " " << result;
					//outfile << "\n";
					//outfile.flush();
				}
			}
			//else {
			//	wsprintfW(presencetext, L" Incoming Transmission: %d",wasChangedOnce);
			//	wcsncpy(currentpresencetext, presencetext, 256);
			//	origincomp->SetRichPresence(currentpresencetext, L"");
			//}
		}
		else if (origincomp && grimp)
		{
			//int numPlayers = grimp->NumPlayersInGame();
			//int numAlive = grimp->NumLivingPlayers();
			wsprintfW(presencetext, L"MP Match: %ls/%ls/%ls", textmap[grimp->MapSetting], textenemy[grimp->EnemySetting], textdif[grimp->DifficultySetting]);
			if (wcscmp(currentpresencetext, presencetext) != 0) {
				//difference
				//outfile << "Set status as MP Match\n";
				//outfile.flush();
				bool result = origincomp->SetRichPresence(presencetext, L"");
				if (result == 1) {
					wcsncpy(currentpresencetext, presencetext, 256);
					//outfile << "Set new precence: " << presencetext << " " << result;
					//outfile << "\n";
				//	outfile.flush();
				}
				else {
					//outfile << "Failed to set new precence: " << presencetext << " " << result;
					//outfile << "\n";
					//outfile.flush();
				}

			}
		}
		else if (origincomp)
		{
			wsprintfW(presencetext, L"Singleplayer");
			if (wcscmp(currentpresencetext, presencetext) != 0) {

				//outfile << "Writing new presence: " << presencetext;
				//outfile << "\n";
				//outfile.flush();
				bool res = origincomp->SetRichPresence(presencetext, L"");
				if (res == 1) {
						wcsncpy(currentpresencetext, presencetext, 256);
						//outfile << "Set new precence, POST 10: " << presencetext << " " << res;
						//outfile << "\n";
						//outfile.flush();
				}
				else {
					//outfile << "Failed to set new presence: " << presencetext << " " << res;
					//outfile << "\n";
					//outfile.flush();
				}
			}
		}

		//else {
		//	wsprintfW(presencetext, L"This is currentpresencetext value from SP");
		//	wcsncpy(currentpresencetext, presencetext, 256);
		//	origincomp->SetRichPresence(currentpresencetext, L"");
		//}
		else {
			//outfile << "No origin comp available to update status with.\n";
			//outfile.flush();
		}
	} while (true);
	return 0;
}


bool __stdcall DllMain(HANDLE process, DWORD reason, LPVOID lpReserved) {
	if (reason == DLL_PROCESS_ATTACH)
	{
		lobbyPointer = (DWORD)GetModuleHandle(NULL) + 0x152698C;
		CreateThread(0, 0, &RichPresenceUpdater, 0, 0, 0);
		return 1;
	}
	else if (reason == DLL_PROCESS_DETACH)
	{
		return 1;
	}
	return 0;
}