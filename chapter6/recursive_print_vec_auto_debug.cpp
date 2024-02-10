#include <iostream>
#include <vector>
void printT(auto beg, auto end) {
  if(beg!=end) {
    std::cout << "Current value is " << *beg << std::endl;
    #ifndef NDEBUG
    std::cout << "Vector size is " << end - beg << std::endl;
    #endif
    printT(++beg, end);
  }
}

int main() {
  auto vec = std::vector<int>{1,2,3,4};
  printT(vec.cbegin(), vec.cend());
  return 0;
}