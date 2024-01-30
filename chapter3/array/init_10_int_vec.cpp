#include <cstddef>
#include <cstdint>
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
  auto ivec = vector<int32_t>{0,1,2,3,4,5,6,7,8,9};
  auto civec = ivec;
  for (auto i: civec)
  {
    cout << i << ' ';
  }
  return 0;
}