#include <Windows.h>

BOOL APIENTRY DllMain(HMODULE module, DWORD ul_reason_for_call, LPVOID reserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        MessageBox(NULL, L"Hello!", L"Payload", NULL);
        break;
    }
    return TRUE;
}
