#include <iostream>

int main() {
  int ival = 1024;
  int *pi = &ival;
  int **ppi = &pi;
  std::cout << "The value of ival\n" << "direct value: " << ival << "\n" << "indirect value: " << *ppi << "\n" << "doubly indirect value: " << **ppi << std::endl;
  int i = 42;
  int *p;
  int *&r = p;
  r = &i;
  *r = 0;
  std::cout << *r << std::endl;
  return 0;
}
