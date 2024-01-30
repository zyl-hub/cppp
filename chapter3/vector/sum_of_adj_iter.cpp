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
  // add adjacent
  for (auto it = ivec.cbegin(); it != ivec.cend() - 1; ++it) {
    cout << *it + *(it + 1) << ' ';
  }
  cout << endl;
  return 0;
}