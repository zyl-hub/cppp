#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  auto svec = vector<string>{"123", "fdsaf", "dsajfl"};
  auto ivec = vector<int32_t>{};
  auto new_svec = vector<string>(10, "hi!");
  for (auto str : new_svec) {
    cout << str << endl;
  }
  auto s = string{"some string"};
  for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) *it = toupper(*it); // capitalize the current character 
  cout << s << endl;
  return 0;
}
