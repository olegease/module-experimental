// cl /experimental:module /EHsc /MD /std:c++latest /utf-8 test.cpp win.user.ixx win.libloaderapi.ixx user32.lib
import std.core;
import win.user;

winapi::LRESULT __stdcall WindowProcedure(winapi::HWND hWnd, winapi::UINT msg, winapi::WPARAM wp, winapi::LPARAM lp);

int main()
{
    const wchar_t* const myclass = L"application";
    winapi::WNDCLASSEX c;
    c.cbSize = sizeof(winapi::WNDCLASSEX);
    c.style = winapi::CS_DBLCLKS | winapi::CS_HREDRAW | winapi::CS_VREDRAW;
    c.lpfnWndProc = WindowProcedure;
    c.cbClsExtra = 0;
    c.cbWndExtra = 0;
    c.hInstance = winapi::GetModuleHandle(nullptr);
    c.hIcon = nullptr;
    c.hCursor = nullptr;
    c.hbrBackground = nullptr;
    c.lpszMenuName = nullptr;
    c.lpszClassName = myclass;
    c.hIconSm = nullptr;

    winapi::RegisterClassEx(&c);

    winapi::HWND wid = winapi::CreateWindowEx(
        0L,
        myclass,
        L"тест",
        winapi::WS_OVERLAPPED,
        0,
        0,
        640,
        480,
        nullptr,
        nullptr,
        c.hInstance,
        nullptr
    );
    winapi::ShowWindow(wid, winapi::SW_SHOW);
    winapi::MSG msg;
    while (winapi::GetMessage(&msg, nullptr, 0, 0)) {
        winapi::TranslateMessage(&msg);
        winapi::DispatchMessage(&msg);
    }
}

winapi::LRESULT __stdcall WindowProcedure(winapi::HWND hWnd, winapi::UINT msg, winapi::WPARAM wp, winapi::LPARAM lp)
{
    switch (msg) {
    case winapi::WM_DESTROY:
        winapi::PostQuitMessage(0);
        break;
    }
    return winapi::DefWindowProc(hWnd, msg, wp, lp);
}
