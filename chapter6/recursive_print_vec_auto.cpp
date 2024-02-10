#include <iostream>
#include <vector>
void printT(auto beg, auto end) {
  if(beg!=end) {
    std::cout << *beg << ' ';
    printT(++beg, end);
  }
}

int main() {
  auto vec = std::vector<int>{1,2,3,4};
  printT(vec.cbegin(), vec.cend());
  return 0;
}