#include <iostream>

template <typename T> T myAbs(T a) {
  if (a < 0)
    return -a;
  else
    return a;
}

int main() {
  int32_t a = -432;
  std::cout << myAbs(a) << std::endl;
  return 0;
}