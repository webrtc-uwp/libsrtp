/*
* winrt_helpers.cpp
*
* File contains declaration of test helper functions specific for WinRT runtime
*
*/

#ifndef _WINRT_HELPERS_H
#define _WINRT_HELPERS_H

#ifdef __cplusplus
  extern "C" {
#endif

void exit_by_throw(int status);

#ifdef __cplusplus
  }
#endif

//redefine crt exit function to exit_by_throw
#define exit(status) exit_by_throw(status)

#endif //_WINRT_HELPERS_H