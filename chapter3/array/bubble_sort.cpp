#include <iostream>
using std::cout;

int main() {
  int arr[] = {5,9,2,7,4,3,12,6,1,5,7};
  size_t size = sizeof(arr) / sizeof(arr[0]);

  for (size_t i=0; i<size; ++i) {
    for (size_t j = 0; j < size - i - 1; ++j) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (auto num : arr) {
    cout << num << " ";
  }

  return 0;
}