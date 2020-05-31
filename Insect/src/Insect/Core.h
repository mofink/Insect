#pragma once

//To build, the macros INSECT_PLATFORM_WINDOWS and INSECT_BUILD_DLL must be defined

#ifdef INSECT_PLATFORM_WINDOWS
   #if INSECT_BUILD_DLL
      #define INSECT_API __declspec(dllexport) 
   #else
      #define INSECT_API __declspec(dllimport)
   #endif
#else
   //trigger an error and don't build
   #error "INSECT ONLY SUPPORTED ON WINDOWS" 
#endif