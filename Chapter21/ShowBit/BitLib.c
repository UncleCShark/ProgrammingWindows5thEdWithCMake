/*--------------------------------------------------------------
   BITLIB.C -- Code entry point for BITLIB dynamic-link library
               (c) Charles Petzold,  1998
  --------------------------------------------------------------*/

#include <windows.h>

int WINAPI DllMain (HINSTANCE hInstance, DWORD fdwReason, PVOID pvReserved)
{
     return TRUE ;
}
// only to force .lib creation for cmake
__declspec (dllexport) int Fake;
