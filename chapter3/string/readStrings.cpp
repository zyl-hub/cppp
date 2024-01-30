#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  auto s = string{};
  auto s_con = string{};
  while (cin >> s) {
    s_con += s;
    s_con += ' ';
  }
  cout << s_con << endl;
  return 0;
}