/* Copyright 2014 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "ecma-alloc.h"
#include "ecma-builtins.h"
#include "ecma-conversion.h"
#include "ecma-exceptions.h"
#include "ecma-gc.h"
#include "ecma-globals.h"
#include "ecma-helpers.h"
#include "ecma-objects.h"
#include "ecma-try-catch-macro.h"
#include "globals.h"

#ifdef CONFIG_ECMA_COMPACT_PROFILE

#define ECMA_BUILTINS_INTERNAL
#include "ecma-builtins-internal.h"

#define BUILTIN_INC_HEADER_NAME "ecma-builtin-compact-profile-error.inc.h"
#define BUILTIN_UNDERSCORED_ID compact_profile_error
#include "ecma-builtin-internal-routines-template.inc.h"

/** \addtogroup ecma ECMA
 * @{
 *
 * \addtogroup ecmabuiltins
 * @{
 *
 * \addtogroup compact_profile_error ECMA CompactProfileError object built-in
 * @{
 */

/**
 * Handle calling [[Call]] of built-in CompactProfileError object
 *
 * @return completion-value
 */
ecma_completion_value_t
ecma_builtin_compact_profile_error_dispatch_call (ecma_value_t *arguments_list_p, /**< arguments list */
                                                  ecma_length_t arguments_list_len) /**< number of arguments */
{
  JERRY_ASSERT (arguments_list_len == 0 || arguments_list_p != NULL);

  return ecma_make_throw_obj_completion_value (ecma_builtin_get (ECMA_BUILTIN_ID_COMPACT_PROFILE_ERROR));
} /* ecma_builtin_compact_profile_error_dispatch_call */

/**
 * Handle calling [[Construct]] of built-in CompactProfileError object
 *
 * @return completion-value
 */
ecma_completion_value_t
ecma_builtin_compact_profile_error_dispatch_construct (ecma_value_t *arguments_list_p, /**< arguments list */
                                                       ecma_length_t arguments_list_len) /**< number of arguments */
{
  JERRY_ASSERT (arguments_list_len == 0 || arguments_list_p != NULL);

  return ecma_make_throw_obj_completion_value (ecma_builtin_get (ECMA_BUILTIN_ID_COMPACT_PROFILE_ERROR));
} /* ecma_builtin_compact_profile_error_dispatch_construct */

/**
 * @}
 * @}
 * @}
 */

#endif /* CONFIG_ECMA_COMPACT_PROFILE */
