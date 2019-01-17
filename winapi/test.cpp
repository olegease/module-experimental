// utf-8 PROTECTION FROM MICROSOFT: 🖕( ͡° ͜ʖ ͡° )🖕
// cl /experimental:module /EHsc /MD /std:c++latest /utf-8 test.cpp win._core.ixx win.libloaderapi.ixx win.user.ixx win.gdi.ixx ..\opengl\opengl.core1_0.ixx ..\opengl\opengl.core1_0.chain.ixx user32.lib gdi32.lib opengl32.lib

import std.core;
import win.user;
import win.gdi;
import opengl.core1_0;

//#include <gl/GL.h>
//#include <winuser.h>

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
        winapi::WS_OVERLAPPEDWINDOW,
        0,
        0,
        640,
        480,
        nullptr,
        nullptr,
        c.hInstance,
        nullptr
    );

    winapi::PIXELFORMATDESCRIPTOR pfd;
    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = winapi::PFD_DRAW_TO_WINDOW | winapi::PFD_SUPPORT_OPENGL;
    pfd.iPixelType = winapi::PFD_TYPE_RGBA;
    pfd.cColorBits = 32;
    winapi::HDC dc = winapi::GetDC(wid);
    int pf = winapi::ChoosePixelFormat(dc, &pfd);
    winapi::SetPixelFormat(dc, pf, &pfd);
    winapi::DescribePixelFormat(dc, pf, sizeof(pfd), &pfd);
    winapi::HGLRC rc = winapi::wglCreateContext(dc);
    winapi::wglMakeCurrent(dc, rc);

    winapi::ShowWindow(wid, winapi::SW_SHOW);
    winapi::MSG msg;
    while (winapi::GetMessage(&msg, nullptr, 0, 0)) {
        winapi::TranslateMessage(&msg);
        winapi::DispatchMessage(&msg);
    }

    winapi::wglMakeCurrent(nullptr, nullptr);
    winapi::wglDeleteContext(rc);
    winapi::ReleaseDC(dc, wid);
}

winapi::LRESULT __stdcall WindowProcedure(winapi::HWND hWnd, winapi::UINT msg, winapi::WPARAM wp, winapi::LPARAM lp)
{
    switch (msg) {
    case winapi::WM_CREATE:
        std::cout << "created" << std::endl;
        break;
    case winapi::WM_SIZE:
        std::cout << "sized" << std::endl;
        winapi::RECT rect;
        winapi::GetClientRect(hWnd, &rect);
        opengl::glViewport(0, 0, rect.right - rect.left, rect.bottom - rect.top);
        winapi::PostMessage(hWnd, winapi::WM_PAINT, 0, 0);
        break;
    case winapi::WM_PAINT:
        std::cout << "painted" << std::endl;
        opengl::glClearColor(1.f, 0.8f, 0.6f, 1.f);
        opengl::glClear(opengl::GL_COLOR_BUFFER_BIT);
        opengl::glPointSize(32);
        opengl::glBegin(opengl::GL_POINTS);
        opengl::glColor4d(1.0, 0.0, 0.0, 1.0);
        opengl::glVertex4d(0.0, 0.0, 0.0, 1.0);
        opengl::glEnd();
        opengl::glFlush();
        break;
    case winapi::WM_DESTROY:
        std::cout << "destroyed" << std::endl;
        winapi::PostQuitMessage(0);
        break;
    }
    return winapi::DefWindowProc(hWnd, msg, wp, lp);
}
