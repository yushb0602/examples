// client_VC.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "stdio.h"
#include "client_VC.h"
#define MAX_LOADSTRING 100

#include "..\example_dll.h"

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
 	

	HMODULE  handle = LoadLibrary("..\\example_dll.dll");
	FARPROC  proc= GetProcAddress(handle, "Double");
	//hello is a __stdcall!, so "GetProcAddress(handle, "Double"); is failed"
	typedef int (*FUN)(int);
	FUN myfun = (FUN)proc;
	int nRet = myfun(4);
	printf("double(4)=%d", nRet);

	FreeLibrary(handle);
		
	return 0;
}


