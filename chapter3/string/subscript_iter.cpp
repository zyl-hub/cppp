#include <cctype>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  auto s = string{"test fdasf"};
  for (decltype(s.size()) index = 0;
       index != s.size() && !std::isspace(s[index]); ++index) {
    s[index] = toupper(s[index]);
  }
  cout << s << endl;
  return 0;
}