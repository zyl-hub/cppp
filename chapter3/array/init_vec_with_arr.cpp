#include <cstddef>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <vector>
using std::vector;
using std::cout;

int main() {
  int32_t arr[] = {0,1,2,3,4,5,6,7,8,9};
  auto vec = vector<int32_t>(std::begin(arr),std::end(arr));
  for(auto it : vec) {
    cout << it << std::endl;
  }
  return 0;
}