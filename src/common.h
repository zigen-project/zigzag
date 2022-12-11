#pragma once

#include <stdlib.h>

#if defined(__GNUC__) && __GNUC__ >= 4
#define ZIGZAG_EXPORT __attribute__((visibility("default")))
#else
#define ZIGZAG_EXPORT
#endif

/** Allocate memory and set to zero */
static inline void *
zalloc(size_t size)
{
  return calloc(1, size);
}

/** Suppress compiler warnings for unused variables */
#ifndef UNUSED
#define UNUSED(x) ((void)x)
#endif
