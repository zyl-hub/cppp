#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  auto s1 = string{};
  auto s2 = string{};
  cin >> s1 >> s2;
  if (s1.size() > s2.size()) {
    cout << "s1 is longer than s2" << endl;
  } else if (s1.size() == s2.size()) {
    cout << "s1.len is equal to s2.len" << endl;
  } else {
    cout << "s2 is longer than s1" << endl;
  }
  return 0;
}