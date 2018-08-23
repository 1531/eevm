/*
 * This is free and unencumbered software released into the public domain.
 * For more information, please refer to <http://unlicense.org/>
 */

/**
 * @file  uevm_test.c
 * @brief μEVM functional tests
 */

#include <stdio.h>
#include <string.h>
#include "uevm/api.h"

#define FAIL()                                       \
  do {                                               \
    printf("Fail in '%s:%d'\n", __FILE__, __LINE__); \
    return 1;                                        \
  } while (0)

#define ASSERT(expr)                                                \
  do {                                                              \
    if (!(expr)) {                                                  \
      printf("'%s' fails in '%s:%d'\n", #expr, __FILE__, __LINE__); \
      return 1;                                                     \
    }                                                               \
  } while (0)

int main(void) {
  ASSERT(uevm_add(0, 0) == 0);
  printf("Tests completed succesfully\n");
  return 0;
}
