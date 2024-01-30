#include <cstddef>
#include <cstdint>
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main() {
  auto ivec = vector<int32_t>{0,1,2,3,4,5,6,7,8,9};
  size_t len = ivec.size();
  int32_t arr[len];
  for (size_t i = 0; i < len; ++i) {
    arr[i] = ivec[i];
  }
  for (auto it : arr) {
    cout << it << endl;
  }
  return 0;
}