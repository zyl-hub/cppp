#include <cstddef>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
  auto vec1 = vector<int32_t>{0,1,2,3,4,5,6,7,8,9};
  auto vec2 = vector<int32_t>{0,1,2,3,4,5,6,7,8,9, 10};
  if (vec1 != vec2) cout << "unequal" << endl;
  else cout << "equal" << endl;
  return 0;
}
