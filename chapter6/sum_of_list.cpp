#include <initializer_list>
#include <iostream>

int sum(std::initializer_list<int> li) {
  int sum = 0;
  for (auto ele : li) {
    sum += ele;
  }
  return sum;
}

int main() {
  std::cout << sum({1,2,3,4,5,6});
  return 0;
}