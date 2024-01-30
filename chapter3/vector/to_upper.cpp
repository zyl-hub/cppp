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
  uint32_t cnt = 0;
  auto wvec = vector<string>{};
  auto word = string{};
  while (cin >> word) {
    for (auto &c : word)
      c = toupper(c);
    wvec.push_back(word);
  }
  for (auto w : wvec) {
    if (cnt < 7) {
      cout << w << ' ';
      ++cnt;
    } else {
      cout << w << endl;
      cnt = 0;
    }
  }
  return 0;
}