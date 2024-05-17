#include <Windows.h>

//Callback function
LRESULT CALLBACK windows_callback(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    WNDCLASSEXW window_class = { 0 };

    window_class.cbSize = sizeof(WNDCLASSEXW);
    window_class.style = CS_HREDRAW | CS_VREDRAW;
    window_class.lpfnWndProc = windows_callback; // Assign the correct window procedure
    window_class.cbClsExtra = 0;
    window_class.cbWndExtra = 0;
    window_class.hInstance = hInstance;
    window_class.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    window_class.hCursor = LoadCursor(NULL, IDC_ARROW);
    window_class.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    window_class.lpszMenuName = NULL;
    window_class.lpszClassName = L"Game Window Class"; // Wide string
    window_class.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

    if (!RegisterClassExW(&window_class)) {
        MessageBoxW(NULL, L"Window class registration failed!", L"Error", MB_ICONERROR | MB_OK);
        return 1;
    }

    HWND hwnd = CreateWindowW(
        window_class.lpszClassName,  // Window class name (wide string)
        L"My First game!",           // Window title (wide string)
        WS_OVERLAPPEDWINDOW | WS_VISIBLE, // Window style
        CW_USEDEFAULT, CW_USEDEFAULT, // Size and position
        1280, 720,                   // Width and height
        NULL,                        // Parent window
        NULL,                        // Menu
        hInstance,                   // Instance handle
        NULL                         // Additional application data
    );

    if (!hwnd) {
        MessageBoxW(NULL, L"Window creation failed!", L"Error", MB_ICONERROR | MB_OK);
        return 1;
    }

    ShowWindow(hwnd, nCmdShow);

    // Run the message loop
    MSG msg = { 0 };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}