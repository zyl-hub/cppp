#include <iostream>

int gcd(int a, int b) {
  if (b==0) return a;
  return gcd(b, a%b);
}

int main() {
  std::cout << gcd(10,20) << std::endl;
  char s[] = {'1','2','3','0','0','4','5'};
  std::cout << s;
  return 0;
}