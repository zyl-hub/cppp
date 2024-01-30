#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;

int main() {
  auto text = vector<string>{};
  auto line = string{};
  while (getline(cin, line)) {
    text.push_back(line);
  }

  // to upper case loop
  for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
    for (auto sit = (*it).begin(); sit != (*it).end(); ++sit) {
      *sit = toupper(*sit);
    }
  }

  // print loop
  for (auto it = text.cbegin(); it != text.cend(); ++it) {
    if (it->empty()) {
      cout << endl;
    } else {
      cout << *it;
    }
  }
  cout << endl;
  return 0;
}