#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  string temp;
  auto svec = vector<string>{};
  while (cin >> temp) {
    svec.push_back(temp);
  }
  for (auto s : svec)
    cout << s << endl;
  return 0;
}
