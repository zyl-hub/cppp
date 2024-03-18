#include <iostream>
using std::endl;
using std::cout;
using std::string;

bool is_perfect(int num) {
  int sum_of_mul = 0;
  if (num == 0 || num == 1) return false;
  for (int i=1;i<num;++i) {
    if (num%i == 0) sum_of_mul += i;
  }
  if(sum_of_mul == num) return true;
  return false;
}

int main() {
  int sum = 0;
  for(int i=1;i<1000;++i)
    if(is_perfect(i)) sum += i;
  cout << sum;
  return 0;
}