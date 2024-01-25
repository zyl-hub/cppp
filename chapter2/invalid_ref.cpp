#include <iostream>

int main() {
  int ival = 1.01;
  // int &rval1 = 1.01; // error: initializer must be an object
  int &rval2 = ival;
  // int &rval3; // error: reference must be initilized
  return 0;
}
