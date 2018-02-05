/*
 * Copyright 2017,2018 cc-wrapper authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef STRING_UTIL_H
#define STRING_UTIL_H

#include "array.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Returns allocated memory containing the a copy of the string contents
 */
char *string_clone(const char *str);

/*
 * Frees an array containing c-strings as a convenience for environment
 * and arguments.
 */
void string_array_free(struct array *arr);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // STRING_UTIL_H