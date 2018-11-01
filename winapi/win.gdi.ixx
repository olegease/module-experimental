// cl /experimental:module /EHsc /MD /std:c++latest /utf-8 win.gdi.ixx win._core.ixx
export module win.gdi;
import win._core;
namespace winapi {
export {
    constexpr auto PFD_TYPE_RGBA = 0;

    constexpr auto PFD_DRAW_TO_WINDOW = 0x00000004;
    constexpr auto PFD_SUPPORT_OPENGL = 0x00000020;

    struct PIXELFORMATDESCRIPTOR {
        WORD  nSize;
        WORD  nVersion;
        DWORD dwFlags;
        BYTE  iPixelType;
        BYTE  cColorBits;
        BYTE  cRedBits;
        BYTE  cRedShift;
        BYTE  cGreenBits;
        BYTE  cGreenShift;
        BYTE  cBlueBits;
        BYTE  cBlueShift;
        BYTE  cAlphaBits;
        BYTE  cAlphaShift;
        BYTE  cAccumBits;
        BYTE  cAccumRedBits;
        BYTE  cAccumGreenBits;
        BYTE  cAccumBlueBits;
        BYTE  cAccumAlphaBits;
        BYTE  cDepthBits;
        BYTE  cStencilBits;
        BYTE  cAuxBuffers;
        BYTE  iLayerType;
        BYTE  bReserved;
        DWORD dwLayerMask;
        DWORD dwVisibleMask;
        DWORD dwDamageMask;
    };
}

namespace C {
extern "C" {
    int      ChoosePixelFormat(HDC, const PIXELFORMATDESCRIPTOR*);
    int      DescribePixelFormat(HDC, int, UINT, const PIXELFORMATDESCRIPTOR*);
    BOOL     SetPixelFormat(HDC, int, const PIXELFORMATDESCRIPTOR*);
    HGLRC    wglCreateContext(HDC);
    BOOL     wglDeleteContext(HGLRC);
    BOOL     wglMakeCurrent(HDC, HGLRC);
}}

export {
    auto ChoosePixelFormat = C::ChoosePixelFormat;
    auto DescribePixelFormat = C::DescribePixelFormat;
    auto SetPixelFormat = C::SetPixelFormat;
    auto wglCreateContext = C::wglCreateContext;
    auto wglDeleteContext = C::wglDeleteContext;
    auto wglMakeCurrent = C::wglMakeCurrent;
}}
