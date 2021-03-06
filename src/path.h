/*
 * Copyright 2017 cc-wrapper authors
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

#ifndef PATH_H
#define PATH_H

#include <unistd.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Returns the position of the separator preceeding the base
 * of the path. Returns -1 when there is no separator present.
 */
ssize_t path_base_split(const char *path);

/*
 * Returns a reference to the base of the path.
 */
const char *path_base(const char *path);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // PATH_H
