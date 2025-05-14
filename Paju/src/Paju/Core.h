#pragma once

#ifdef PJ_PLATFORM_WINDOWS
	#ifdef PJ_BUILD_DLL
		#define PAJU_API __declspec(dllexport)
	#else
		#define PAJU_API __declspec(dllimport)
	#endif

#else
	#error Paju only supports windows!

#endif