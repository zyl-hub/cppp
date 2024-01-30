#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main() {
  const string s = "Keep out!"; for (auto &c : s) { /* ... */ } 
  constexpr unsigned sz = 123513251123512351;
  cout << sizeof(sz) << endl;
  return 0;
}
