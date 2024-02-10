#include <iostream>
#include <vector>
template <typename T> void printT(typename std::vector<T>::const_iterator beg, typename std::vector<T>::const_iterator end) {
  if(beg!=end) {
    std::cout << *beg << ' ';
    printT<T>(++beg, end);
  }
}

int main() {
  auto vec = std::vector<int>{1,2,3,4};
  printT<int>(vec.cbegin(), vec.cend());
  return 0;
}