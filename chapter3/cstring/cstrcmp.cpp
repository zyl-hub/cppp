#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  char str1[] = "very loooong";
  char str2[] = "very long";
  if (strcmp(str1, str2) < 0) {
    cout << "str1 is smaller than str2" << endl;
  } else if (strcmp(str1, str2) > 0) {
    cout << "str1 is bigger than str2" << endl;
  } else {
    cout << "str1 = str2" << endl;
  }
}