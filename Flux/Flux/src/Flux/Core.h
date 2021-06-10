#pragma once

#ifdef FX_PLATFORM_WINDOWS
	#ifdef FLUX_BUILD_DLL
		#define FLUX_API _declspec(dllexport)
	#else
		#define FLUX_API _declspec(dllimport)
	#endif
#else
	#error Flux only supports widows!
#endif