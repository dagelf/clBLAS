/* ************************************************************************
 * Copyright 2013 Advanced Micro Devices, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ************************************************************************/


#ifndef DEFBOOL_H_
#define DEFBOOL_H_

#if defined(__powerpc64__) && defined(__ALTIVEC__)
#include "altivec.h"
#undef bool
#endif

#if defined(_MSC_VER) && _MSC_VER <= 1700

/*
FIX for windows compilation
#if !defined(__cplusplus)

typedef int _Bool;
#define bool _Bool
enum {
    false,
    true
};
#endif
*/

#define  __bool_true_false_are_defined  1

#ifndef __cplusplus

#define  bool  _Bool
#if __STDC_VERSION__ < 199901L && __GNUC__ < 3
#define  false  0
#define  true  1

typedef  int  _Bool;
#endif

#endif /* !__cplusplus */


#else /* defined(_MSC_VER) && _MSC_VER <= 1700 */

#include <stdbool.h>

#endif /* defined(_MSC_VER) && _MSC_VER <= 1700 */

#endif /* DEFBOOL_H_ */
