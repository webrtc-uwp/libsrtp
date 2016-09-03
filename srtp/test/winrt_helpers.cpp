/*
* winrt_helpers.cpp
*
* File contains implementation of test helper functions specific for WinRT runtime
*
*/

// disable: function assumed not to throw an exception but does 
#pragma warning(disable : 4297)

#include "winrt_helpers.h"
//=======================================================================
//         Method: exit_by_throw
//    Description: This method is replacement of crt exit() function for WinRT runtime.
//                 WinRT runtime uses tests as static library linked to runner application.
//                 Crt exit() function causes exiting entire runner, so this method changes exit to 
//                 throwing exception (runner can continue). Since test are written in C language, 
//                 exit_by_throw is implemented in separated cpp file.
//                 IMPORTANT!!!!: Throwing an exception from C code is really bad practice, there might 
//                 remain non freed objects and resources. But because it's only for tests purposes.
//       Argument: int status - exit status
//         return: void
//
//       History:
// 2015/03/03 TP: created
//======================================================================
void exit_by_throw(int status)
{
  throw status;
}

