#pragma once

#ifdef KS_PLATFORM_WINDOWS
	#ifdef KS_BUILD_DLL
		#define KENSHIN_API __declspec(dllexport)
	#else
		#define KENSHIN_API __declspec(dllimport)
	#endif
#else

#endif
