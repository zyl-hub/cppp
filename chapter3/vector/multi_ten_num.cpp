#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  auto ivec = vector<int32_t>{1,2,3,4,5,6,7,8,9,10};
  for (auto it = ivec.begin(); it!=ivec.end(); ++it) *it*=2;
  for (auto it = ivec.cbegin(); it!= ivec.cend(); ++it) {
  cout << *it << ' ';
  }
  cout << endl;
  return 0;
}
