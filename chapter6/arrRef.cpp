#include <iostream>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrRef(int i) { return (i % 2) ? odd : even; }

int main() {
  for(auto ele : arrRef(1)) {
    std::cout << ele << ' ';
  }
  return 0;
}