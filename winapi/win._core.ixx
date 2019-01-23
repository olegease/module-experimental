// cl /experimental:module /utf-8 /EHsc /MD /std:c++latest win._core.ixx
export module win._core;
import std.core;
namespace winapi {
export {
    // predefined structs
    struct DECLARE_HANDLE;
    struct RECT;
    // types
    using ATOM = unsigned short;
    using BOOL = int;
    using BYTE = unsigned char;
    using DWORD = unsigned long;
    using HBRUSH = DECLARE_HANDLE*;
    using HDC = DECLARE_HANDLE*;
    using HGLRC = DECLARE_HANDLE*;
    using HICON = DECLARE_HANDLE*;
    using HINSTANCE = DECLARE_HANDLE*;
    using HMENU = DECLARE_HANDLE*;
    using HWND = DECLARE_HANDLE*;
    using LONG = long;
    using LPARAM = int64_t;
    using LPCWSTR = const wchar_t*;
    using LPRECT = RECT*;
    using LPVOID = void*;
    using LRESULT = int64_t;
    using UINT = unsigned int;
    using WORD = unsigned short;
    using WPARAM = uint64_t;
    // types alias
    using HCURSOR = HICON;
    using HMODULE = HINSTANCE;

    // structs
    struct DECLARE_HANDLE {
        int unused;
    };
    struct POINT {
        LONG x;
        LONG y;
    };
    struct RECT {
        LONG left;
        LONG top;
        LONG right;
        LONG bottom;
    };
}}
