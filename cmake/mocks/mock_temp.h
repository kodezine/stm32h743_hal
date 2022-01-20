/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_TEMP_H
#define _MOCK_TEMP_H

#include "unity.h"
#include <stdbool.h>
#include <stdint.h>
#include "temp.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_temp_Init(void);
void mock_temp_Destroy(void);
void mock_temp_Verify(void);




#define retVal_addition_IgnoreAndReturn(cmock_retval) retVal_addition_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void retVal_addition_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, DUMMY8 cmock_to_return);
#define retVal_addition_StopIgnore() retVal_addition_CMockStopIgnore()
void retVal_addition_CMockStopIgnore(void);
#define retVal_addition_ExpectAnyArgsAndReturn(cmock_retval) retVal_addition_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void retVal_addition_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, DUMMY8 cmock_to_return);
#define retVal_addition_ExpectAndReturn(x, y, cmock_retval) retVal_addition_CMockExpectAndReturn(__LINE__, x, y, cmock_retval)
void retVal_addition_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, DUMMY8 x, DUMMY8 y, DUMMY8 cmock_to_return);
typedef DUMMY8 (* CMOCK_retVal_addition_CALLBACK)(DUMMY8 x, DUMMY8 y, int cmock_num_calls);
void retVal_addition_AddCallback(CMOCK_retVal_addition_CALLBACK Callback);
void retVal_addition_Stub(CMOCK_retVal_addition_CALLBACK Callback);
#define retVal_addition_StubWithCallback retVal_addition_Stub
#define retVal_addition_IgnoreArg_x() retVal_addition_CMockIgnoreArg_x(__LINE__)
void retVal_addition_CMockIgnoreArg_x(UNITY_LINE_TYPE cmock_line);
#define retVal_addition_IgnoreArg_y() retVal_addition_CMockIgnoreArg_y(__LINE__)
void retVal_addition_CMockIgnoreArg_y(UNITY_LINE_TYPE cmock_line);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
