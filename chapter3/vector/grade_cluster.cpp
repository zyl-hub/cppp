#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
  auto ivec = vector<uint32_t>(11, 0);
  uint32_t grade;
  auto beg = ivec.begin();
  while (cin >> grade) {
    if (grade <= 100) {
      ++*(beg + grade/10);
    }
  }
  for (auto it = ivec.cbegin(); it != ivec.cend(); ++it) {
    cout << *it << ' ';
  }
  
  return 0;
}