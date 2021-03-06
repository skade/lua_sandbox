/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set ts=2 et sw=2 tw=80: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/** Heka message string @file */

#ifndef luasandbox_util_string_h_
#define luasandbox_util_string_h_

#include "util.h"

typedef struct lsb_const_string
{
  const char  *s;
  size_t      len;
} lsb_const_string;


#ifdef __cplusplus
extern "C" {
#endif

/**
 * Initializes the struct to zero
 *
 * @param s Pointer to the struct
 *
 */
LSB_UTIL_EXPORT void lsb_init_const_string(lsb_const_string *s);

#ifdef __cplusplus
}
#endif

#endif
