#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  auto ivec = vector<int32_t>{};
  int32_t input_num;
  while (cin >> input_num) {
    ivec.push_back(input_num);
  }
  auto beg = ivec.cbegin();
  auto end = ivec.cend();
  auto mid = ivec.cbegin() + (end - beg)/2;
  // add first and last, second and second-to-last, etc
  for (auto it = ivec.cbegin(); it != mid; ++it) {
    cout << *it + *(beg + (end - it) - 1) << ' ';
  }
  cout << endl;
  return 0;
}