// utf-8 PROTECTION FROM MICROSOFT: 🖕( ͡° ͜ʖ ͡° )🖕
// cl /experimental:module /EHsc /MD /std:c++latest /utf-8 win.libloaderapi.ixx win._core.ixx
export module win.libloaderapi;
import win._core;

namespace winapi {

namespace C {
extern "C" {
    HMODULE GetModuleHandleW(LPCWSTR);
}}

export {
    auto GetModuleHandle = C::GetModuleHandleW;
}}
