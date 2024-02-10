#include <cstddef>
#include <iostream>
#include <iterator>

void print(const int *arr, std::size_t size) {
  for (std::size_t i = 0; i != size; ++i) {
    std::cout << arr[i] << std::endl;
  }
}

void print(const int *beg, const int *end) {
  while (beg != end) {
    std::cout << *beg++ << std::endl;
  }
}

void print(const int (&arr)[2]) {
  for (auto elem : arr) {
    std::cout << elem << std::endl;
  }
}

int main() {
  int i = 0, j[2] = {0, 1};
  print(j);
  print(j, 2);
  print(std::begin(j), std::end(j));
  return 0;
}
