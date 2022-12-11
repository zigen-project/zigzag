#pragma once

#include <stdio.h>

void print_log(const char *format, ...)
    __attribute__((__format__(printf, 1, 2)));

#define LOG_DEBUG(format, ...) \
  print_log("[zigzag] DEBUG: " format "\n", ##__VA_ARGS__)

#define LOG_INFO(format, ...) \
  print_log("[zigzag]  INFO: " format "\n", ##__VA_ARGS__)

#define LOG_WARN(format, ...) \
  print_log("[zigzag]  WARN: " format "\n", ##__VA_ARGS__)

#define LOG_ERROR(format, ...) \
  print_log("[zigzag] ERROR: " format "\n", ##__VA_ARGS__)

#define LOG_FATAL(format, ...) \
  print_log("[zigzag] FATAL: " format "\n", ##__VA_ARGS__)
