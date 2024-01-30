#include <cstddef>
#include <cstdint>
#include <iostream>
#include <iterator>
using std::cout;
using std::begin;
using std::end;

int main() {
  int32_t arr[] = {0,1,2,3,4,5,6,7,8,9};
  auto b = arr;
  auto e = arr + 10;
  while (b < e) {
    *b = 0;
    ++b;
  }
  for (auto it: arr)
  {
    cout << it << ' ';
  }
  return 0;
}
