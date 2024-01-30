#include <cstring>
#include <iostream>
  
int main() {
  char largeStr[] = "very loooong";
  int x;
  std::cin >> x;
  strcat(largeStr, "    ");
  std::cout << x;
  return 0;
}