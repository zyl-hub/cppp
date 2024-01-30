#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main() {
  auto s1 = string{"very loooooong"};
  auto s2 = string{"very long"};
  if (s1 > s2) {
    cout << "s1 is bigger than s2" << endl;
  } else if (s1 < s2) {
    cout << "s1 is smaller than s2" << endl;
  } else {
    cout << "s1 = s2" << endl;
  }
  return 0;
}