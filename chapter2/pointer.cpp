// 2.18
#include <iostream>

int main() {
  int i = 42, j = 100;
  int *pi = &i;
  std::cout << *pi << std::endl;
  *pi = 50;
  std::cout << i << std::endl;
  pi = &j;
  std::cout << *pi << std::endl;
  return 0;
}
