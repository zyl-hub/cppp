#include <cstring>
#include <iostream>

int main() {
  char str1[] = {"very long"};
  char str2[] = {"very very long"};
  auto length = std::strlen(str1) + std::strlen(str2);
  char str3[length];
  strcpy(str3, str1);
  strcat(str3, str2);
  std::cout << str3 << std::endl;
  return 0;
}