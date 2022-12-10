#pragma once

#if defined(__GNUC__) && __GNUC__ >= 4
#define ZIGZAG_EXPORT __attribute__((visibility("default")))
#else
#define ZIGZAG_EXPORT
#endif
