#include <iostream>

int main() {
  std::cout << "size of int is " << sizeof(int) << std::endl;
  std::cout << "size of float is " << sizeof(float) << std::endl;
  std::cout << "size of double is " << sizeof(double) << std::endl;
  std::cout << "size of char is " << sizeof(char) << std::endl;
  std::cout << "size of bool is " << sizeof(bool) << std::endl;
  std::cout << "size of long int is " << sizeof(long int) << std::endl;
  int x[10]; int *p = x; std::cout << sizeof(x)/sizeof(*x) << std::endl; std::cout << sizeof(p)/sizeof(*p) << std::endl;
}