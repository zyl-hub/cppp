#include <iostream>


int rev(int num, int sum) {
  sum *= 10;
  sum = sum + num%10;
  if (num / 10 == 0) return sum;
  return rev(num/10, sum);
}

int reverse(int num) {
  return rev(num, 0);
}


int main() {
  std::cout << reverse(12345);
  return 0;
}