#include <iostream>
#include <string>
#include <format>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
  auto s1 = string{};
  auto s2 = string{};
  cin >> s1 >> s2;
  if (s1 == s2) {
    cout << "equal" << endl;
  } else if (s1 > s2) {
    cout << std::format("s1 = {} is larger than s2 = {}", s1, s2) << endl;
  } else {
    // cout << "s2 is larger" << endl;
    cout << std::format("s2 = {} is larger than s1 = {}", s2, s1) << endl;
  }
  return 0;
}