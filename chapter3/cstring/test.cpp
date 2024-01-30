#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const char ca[] = {'h', 'e', '1', 'l', 'o'};
  const char *cp = ca;
  while (*cp) {
    cout << *cp << endl;
    ++cp;
  }
  return 0;
}