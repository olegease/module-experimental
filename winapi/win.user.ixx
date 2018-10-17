// cl /experimental:module /EHsc /MD /std:c++latest win.user.ixx win._core.ixx win.libloaderapi.ixx

export module win.user;
import win._core;
import win.libloaderapi;

namespace winapi {
    using WNDPROC = LRESULT (__stdcall*)(HWND, UINT, WPARAM, LPARAM);
export {
    // constants
    // cs - class style
    constexpr auto CS_VREDRAW = 0x0001;
    constexpr auto CS_HREDRAW = 0x0002;
    constexpr auto CS_DBLCLKS = 0x0008;
    constexpr auto CS_OWNDC = 0x0020;
    constexpr auto CS_CLASSDC = 0x0040;
    constexpr auto CS_PARENTDC = 0x0080;
    constexpr auto CS_NOCLOSE = 0x0200;
    constexpr auto CS_SAVEBITS = 0x0800;
    constexpr auto CS_BYTEALIGNCLIENT = 0x1000;
    constexpr auto CS_BYTEALIGNWINDOW = 0x2000;
    constexpr auto CS_GLOBALCLASS = 0x4000;
    // sw - show window
    constexpr auto SW_HIDE = 0;
    constexpr auto SW_SHOWNORMAL = 1;
    constexpr auto SW_NORMAL = 1;
    constexpr auto SW_SHOWMINIMIZED = 2;
    constexpr auto SW_SHOWMAXIMIZED = 3;
    constexpr auto SW_MAXIMIZE = 3;
    constexpr auto SW_SHOWNOACTIVATE = 4;
    constexpr auto SW_SHOW = 5;
    constexpr auto SW_MINIMIZE = 6;
    constexpr auto SW_SHOWMINNOACTIVE = 7;
    constexpr auto SW_SHOWNA = 8;
    constexpr auto SW_RESTORE = 9;
    constexpr auto SW_SHOWDEFAULT = 10;
    constexpr auto SW_FORCEMINIMIZE = 11;
    constexpr auto SW_MAX = 11;
    // wm - window message
    constexpr auto WM_DESTROY = 0x0002;
    // ws - window style
    constexpr auto WS_OVERLAPPED = 0x00000000L;
    constexpr auto WS_POPUP = 0x80000000L;
    constexpr auto WS_CHILD = 0x40000000L;
    constexpr auto WS_MINIMIZE = 0x20000000L;
    constexpr auto WS_VISIBLE = 0x10000000L;
    constexpr auto WS_DISABLED = 0x08000000L;
    constexpr auto WS_CLIPSIBLINGS = 0x04000000L;
    constexpr auto WS_CLIPCHILDREN = 0x02000000L;
    constexpr auto WS_MAXIMIZE = 0x01000000L;
    constexpr auto WS_CAPTION = 0x00C00000L;
    constexpr auto WS_BORDER = 0x00800000L;
    constexpr auto WS_DLGFRAME = 0x00400000L;
    constexpr auto WS_VSCROLL = 0x00200000L;
    constexpr auto WS_HSCROLL = 0x00100000L;
    constexpr auto WS_SYSMENU = 0x00080000L;
    constexpr auto WS_THICKFRAME = 0x00040000L;
    constexpr auto WS_GROUP = 0x00020000L;
    constexpr auto WS_TABSTOP = 0x00010000L;
    constexpr auto WS_MINIMIZEBOX = 0x00020000L;
    constexpr auto WS_MAXIMIZEBOX = 0x00010000L;
    constexpr auto WS_OVERLAPPEDWINDOW = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX;
    constexpr auto WS_POPUPWINDOW = WS_POPUP | WS_BORDER | WS_SYSMENU;
    constexpr auto WS_CHILDWINDOW = WS_CHILD;
    constexpr auto WS_TITLED = WS_OVERLAPPED;
    constexpr auto WS_ICONIC = WS_MINIMIZE;
    constexpr auto WS_SIZEBOX = WS_THICKFRAME;
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
}
    using LPMSG = MSG*;

    struct IntUnused {
        int unused;
    };

namespace C {
extern "C" {
    __declspec(dllimport) HWND __stdcall CreateWindowExW(DWORD, LPCWSTR, LPCWSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID);
    __declspec(dllimport) LRESULT __stdcall DefWindowProcW(HWND, UINT, WPARAM, LPARAM);
    __declspec(dllimport) BOOL __stdcall DispatchMessageW(const MSG*);
    __declspec(dllimport) BOOL __stdcall GetMessageW(LPMSG, HWND, UINT, UINT);
    __declspec(dllimport) HCURSOR __stdcall LoadCursorW(HINSTANCE, LPCWSTR);
    __declspec(dllimport) void __stdcall PostQuitMessage(int);
    __declspec(dllimport) ATOM __stdcall RegisterClassExW(const WNDCLASSEX*);
    __declspec(dllimport) BOOL __stdcall ShowWindow(HWND, int);
    __declspec(dllimport) BOOL __stdcall TranslateMessage(const MSG*);
}}

export {
    auto CreateWindowEx = C::CreateWindowExW;
    auto DefWindowProc = C::DefWindowProcW;
    auto DispatchMessage = C::DispatchMessageW;
    auto GetMessage = C::GetMessageW;
    auto LoadCursor = C::LoadCursorW;
    auto PostQuitMessage = C::PostQuitMessage;
    auto RegisterClassEx = C::RegisterClassExW;
    auto ShowWindow = C::ShowWindow;
    auto TranslateMessage = C::TranslateMessage;
}}
