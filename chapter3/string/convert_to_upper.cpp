#include <cctype>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  auto s = string{"test"};
  for (auto &c : s) {
    c = toupper(c);
  }
  cout << s << endl;
  return 0;
}