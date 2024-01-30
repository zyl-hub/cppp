#include <cstddef>
#include <cstdint>
#include <iostream>
#include <iterator>
using std::cout;
using std::begin;
using std::end;

int main() {
  int32_t arr[] = {0,1,2,3,4,5,6,7,8,9};
  // init with default all 0
  int32_t carr[10]{};
  // without init, random value
  for (auto i: carr)
  {
    cout << i << ' ';
  }
  for (size_t i = 0;i < sizeof(arr)/sizeof(int32_t);++i)
  {
    carr[i] = arr[i];
  }
  for (auto i: carr)
  {
    cout << i << ' ';
  }
  for (auto it = begin(arr); it != end(arr); ++it) {
    cout << *it << ' ';
  }
  return 0;
}
