#include <cctype>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  auto s = string{"Hello world!!!"};
  auto res = string{};
  for (auto c : s) {
    if (!ispunct(c)) {
      res += c;
    }
  }
  cout << res << endl;
  return 0;
}