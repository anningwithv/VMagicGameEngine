#pragma once
#ifdef E_PLATFORM_WINDOWS
#ifdef E_BUILD_DLL
#define ENGINE_API __declspec(dllexport)
#else
#define ENGINE_API __declspec(dllimport)
#endif // HZ_BUILD_DLL
#else
#error Engine only support Windows!
#endif // !HZ_PLATFORM_WINDOWS
