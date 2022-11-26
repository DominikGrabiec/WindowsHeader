# WindowsHeader

A simple header file to include instead of including `<windows.h>` directly. 

This header file sets some defines, `#include <windows.h>`, and then `#undef`s the Win32 API macros that switch between the `A` and `W` version of the functions.

Need to include this header file **before** including other dependencies because they might themselves `#include <windows.h>`.

See [this blog article](https://www.dominikgrabiec.com/c++/2022/11/26/undoing_windows_header_macros.html) for reasoning and motivation.
