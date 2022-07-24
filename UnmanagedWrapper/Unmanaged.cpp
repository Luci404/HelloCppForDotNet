#include "pch.h"
#include "Unmanaged.h"

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

int Unmanaged::Hello(void) {
	return MessageBox(NULL, L"Hello", L"Unmanaged", MB_OK);
}