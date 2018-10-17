// cl /experimental:module /EHsc /MD /std:c++latest win.libloaderapi.ixx win._core.ixx
export module win.libloaderapi;
import win._core;

namespace winapi {
export {
;
}

namespace C {
extern "C" {
    __declspec(dllimport) HMODULE __stdcall GetModuleHandleW(LPCWSTR);
}}

export auto GetModuleHandle = C::GetModuleHandleW;
}
