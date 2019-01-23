// cl /experimental:module /EHsc /MD /std:c++latest /utf-8 win.user.ixx win._core.ixx win.libloaderapi.ixx

export module win.user;
import win._core;
import win.libloaderapi;

namespace winapi {
    using WNDPROC = LRESULT (__stdcall*)(HWND, UINT, WPARAM, LPARAM);
export {
    // constants
    // cs - class style
    constexpr auto CS_BYTEALIGNCLIENT = 0x1000;
    constexpr auto CS_BYTEALIGNWINDOW = 0x2000;
    constexpr auto CS_CLASSDC = 0x0040;
    constexpr auto CS_DBLCLKS = 0x0008;
    constexpr auto CS_GLOBALCLASS = 0x4000;
    constexpr auto CS_HREDRAW = 0x0002;
    constexpr auto CS_NOCLOSE = 0x0200;
    constexpr auto CS_OWNDC = 0x0020;
    constexpr auto CS_PARENTDC = 0x0080;
    constexpr auto CS_SAVEBITS = 0x0800;
    constexpr auto CS_VREDRAW = 0x0001;
    // sw - show window
    constexpr auto SW_FORCEMINIMIZE = 11;
    constexpr auto SW_HIDE = 0;
    constexpr auto SW_MAX = 11;
    constexpr auto SW_MAXIMIZE = 3;
    constexpr auto SW_MINIMIZE = 6;
    constexpr auto SW_NORMAL = 1;
    constexpr auto SW_RESTORE = 9;
    constexpr auto SW_SHOW = 5;
    constexpr auto SW_SHOWDEFAULT = 10;
    constexpr auto SW_SHOWMAXIMIZED = 3;
    constexpr auto SW_SHOWMINIMIZED = 2;
    constexpr auto SW_SHOWMINNOACTIVE = 7;
    constexpr auto SW_SHOWNA = 8;
    constexpr auto SW_SHOWNORMAL = 1;
    constexpr auto SW_SHOWNOACTIVATE = 4;
    // wm - window message
    constexpr auto WM_CREATE = 0x0001;
    constexpr auto WM_DESTROY = 0x0002;
    constexpr auto WM_PAINT = 0x000F;
    constexpr auto WM_SIZE = 0x0005;
    // ws - window style
    constexpr auto WS_BORDER = 0x00800000L;
    constexpr auto WS_CAPTION = 0x00C00000L;
    constexpr auto WS_CHILD = 0x40000000L;
    constexpr auto WS_CLIPCHILDREN = 0x02000000L;
    constexpr auto WS_CLIPSIBLINGS = 0x04000000L;
    constexpr auto WS_DISABLED = 0x08000000L;
    constexpr auto WS_DLGFRAME = 0x00400000L;
    constexpr auto WS_GROUP = 0x00020000L;
    constexpr auto WS_HSCROLL = 0x00100000L;
    constexpr auto WS_MAXIMIZE = 0x01000000L;
    constexpr auto WS_MAXIMIZEBOX = 0x00010000L;
    constexpr auto WS_MINIMIZE = 0x20000000L;
    constexpr auto WS_MINIMIZEBOX = 0x00020000L;
    constexpr auto WS_OVERLAPPED = 0x00000000L;
    constexpr auto WS_POPUP = 0x80000000L;
    constexpr auto WS_SYSMENU = 0x00080000L;
    constexpr auto WS_TABSTOP = 0x00010000L;
    constexpr auto WS_THICKFRAME = 0x00040000L;
    constexpr auto WS_VISIBLE = 0x10000000L;
    constexpr auto WS_VSCROLL = 0x00200000L;
    // ws - grouped
    constexpr auto WS_OVERLAPPEDWINDOW = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX;
    constexpr auto WS_POPUPWINDOW = WS_POPUP | WS_BORDER | WS_SYSMENU;
    // ws - alias
    constexpr auto WS_CHILDWINDOW = WS_CHILD;
    constexpr auto WS_ICONIC = WS_MINIMIZE;
    constexpr auto WS_SIZEBOX = WS_THICKFRAME;
    constexpr auto WS_TITLED = WS_OVERLAPPED;
    constexpr auto WS_TITLEDWINDOW = WS_OVERLAPPEDWINDOW;

    // structs
    struct WNDCLASSEX {
        UINT cbSize;
        UINT style;
        WNDPROC lpfnWndProc;
        int cbClsExtra;
        int cbWndExtra;
        HINSTANCE hInstance;
        HICON hIcon;
        HCURSOR hCursor;
        HBRUSH hbrBackground;
        LPCWSTR lpszMenuName;
        LPCWSTR lpszClassName;
        HICON hIconSm;
    };

    struct MSG {
        HWND hwnd;
        UINT message;
        WPARAM wParam;
        LPARAM lParam;
        DWORD time;
        POINT pt;
    };
    using LPMSG = MSG*;
}


namespace C {
extern "C" {
    HWND    CreateWindowExW(DWORD, LPCWSTR, LPCWSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID);
    LRESULT DefWindowProcW(HWND, UINT, WPARAM, LPARAM);
    BOOL    DispatchMessageW(const MSG*);
    BOOL    GetClientRect(HWND, LPRECT);
    HDC     GetDC(HWND);
    BOOL    GetMessageW(LPMSG, HWND, UINT, UINT);
    HCURSOR LoadCursorW(HINSTANCE, LPCWSTR);
    BOOL    PostMessageW(HWND, UINT, WPARAM, LPARAM);
    void    PostQuitMessage(int);
    ATOM    RegisterClassExW(const WNDCLASSEX*);
    int     ReleaseDC(HWND, HDC);
    BOOL    ShowWindow(HWND, int);
    BOOL    TranslateMessage(const MSG*);
}}

export {
    auto CreateWindowEx = C::CreateWindowExW;
    auto DefWindowProc = C::DefWindowProcW;
    auto DispatchMessage = C::DispatchMessageW;
    auto GetClientRect = C::GetClientRect;
    auto GetDC = C::GetDC;
    auto GetMessage = C::GetMessageW;
    auto LoadCursor = C::LoadCursorW;
    auto PostMessage = C::PostMessageW;
    auto PostQuitMessage = C::PostQuitMessage;
    auto RegisterClassEx = C::RegisterClassExW;
    auto ReleaseDC = C::ReleaseDC;
    auto ShowWindow = C::ShowWindow;
    auto TranslateMessage = C::TranslateMessage;
}}
