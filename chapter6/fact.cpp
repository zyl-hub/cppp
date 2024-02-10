#include <cstdint>
#include <iostream>
#include "chapter6.h"
int32_t fact(int32_t val) {
  int32_t res = 1;
  while (val > 1) {
    res *= val--;
  }
  return res;
}
