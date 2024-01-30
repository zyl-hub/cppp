#include <cstddef>
#include <cstdint>
#include <iostream>
#include <iterator>
using std::cout;
using std::begin;
using std::end;

int main() {
  int32_t arr[] = {0,1,2,3,4,5,6,7,8,9};
  int32_t arr2[] = {0,1,2,3,4,5,6,7,8,9, 10};
  auto arr_size = sizeof(arr)/sizeof(int32_t);
  auto arr2_size = sizeof(arr2)/sizeof(int32_t);
  if (sizeof(arr) != sizeof(arr2)) {
    cout << "unequal";
  } else {
    for (size_t i = 0; i < arr_size; ++i) {
      if(arr[i] != arr2[i]){
        cout << "unequal";
        return 0;
      }
    }
    cout << "equal";
  }
  return 0;
}
