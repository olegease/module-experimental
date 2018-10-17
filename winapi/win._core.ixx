// cl /experimental:module /EHsc /MD /std:c++latest win._core.ixx
export module win._core;
import std.core;
namespace winapi {
export {
    // types
    struct DECLARE_HANDLE;
    using ATOM = unsigned short;
    using BOOL = int;
    using DWORD = unsigned long;
    using HBRUSH = DECLARE_HANDLE*;
    using HICON = DECLARE_HANDLE*;
    using HCURSOR = HICON; // [@|@]
    using HINSTANCE = DECLARE_HANDLE*;
    using HMENU = DECLARE_HANDLE*;
    using HMODULE = HINSTANCE; // [@|@]
    using HWND = DECLARE_HANDLE*;
    using LPARAM = int64_t;
    using LPCWSTR = const wchar_t*;
    using LPVOID = void*;
    using LRESULT = int64_t;
    using UINT = unsigned int;
    using WPARAM = uint64_t;

    // structs
    struct DECLARE_HANDLE {
        int unused;
    };
    struct POINT {
        long x;
        long y;
    };
}}
