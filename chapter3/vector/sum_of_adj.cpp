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
  for (decltype(ivec.size()) index = 0; index < ivec.size() - 1; ++index) {
    cout << ivec[index] + ivec[index + 1] << ' ';
  }
  cout << endl;
  // add first and last, second and second-to-last, etc
  for (decltype(ivec.size()) index = 0; index < ivec.size() / 2; ++index) {
    cout << ivec[index] + ivec[ivec.size() - 1 - index] << ' ';
  }
  cout << endl;
  return 0;
}