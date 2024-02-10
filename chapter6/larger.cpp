#include <iostream>

int larger(int num, const int *pnum) {
  if (num > *pnum) {
    return num;
  } else {
    return *pnum;
  }
}

int main() {
  int a = 1;
  int b = 2;
  int* c = &b;
  std::cout << larger(a, c) << std::endl;
  return 0;
}