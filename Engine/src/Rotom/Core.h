#pragma once

#ifdef RTM_PLATFORM_WINDOWS
	#ifdef RTM_BUILD_DLL
		#define ROTOM_API __declspec(dllexport)
	#else 
		#define ROTOM_API __declspec(dllimport)
	#endif // RTM_BUILD_DLL
#else
	#error ROTOM only supports Windows!
#endif // RTM_PLATFORM_WINDOW
