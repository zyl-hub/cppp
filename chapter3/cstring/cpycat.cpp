#include <cstring>
#include <iostream>
#include <cstring>
using std::cout;
using std::strcpy;
using std::strcat;

int main() {
  // char largeStr[] = {'1', '2', '\0'};
  // char ca1[] = {'1', '2', '\0'};
  // char ca2[] = {'1', '2', '\0'};
  // // note that largeStr only have size 2
  // // undefined
  // strcpy(largeStr, ca1);
  // strcat(largeStr, " ");
  // strcat(largeStr, ca2);
  // cout << largeStr;
  // compile but core dumped
  char largeStr[] = "12";
  int x = 100;
  strcat(largeStr, "  ");
  std::cout << x;
  return 0;
}