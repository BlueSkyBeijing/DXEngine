
#include <windows.h>

#include "Engine.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE prevInstance, PSTR cmdLine, int showCmd)
{
    Engine engineInstance;

    engineInstance.Init();
    engineInstance.Loop();
    engineInstance.Exit();

    return 0;
}
