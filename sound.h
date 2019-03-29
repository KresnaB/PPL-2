#include <windows.h>
#include <Mmsystem.h>
//these two headers are already included in the <Windows.h> header
#pragma comment(lib, "Winmm.lib")

void BGM();
//Background Music;
void FallSFX();
//Fall FX

//catatan: tambahin linker di project biar sound bisa dipake >> "lwinmm"
