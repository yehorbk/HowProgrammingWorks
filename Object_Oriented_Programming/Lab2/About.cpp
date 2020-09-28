#include "About.rh"
#include "About.h"

static BOOL CALLBACK aboutCallback(HWND hDlg, UINT iMessage, WPARAM wParam, LPARAM);

int aboutInterface(HINSTANCE hInst, HWND hWnd)
{
	return DialogBox(
		hInst,
		MAKEINTRESOURCE(IDD_ABOUT),
		hWnd,
		aboutCallback,
	);
}

static BOOL CALLBACK aboutCallback(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return TRUE;
    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return TRUE;
        }
        break;
    }
    return FALSE;
}
