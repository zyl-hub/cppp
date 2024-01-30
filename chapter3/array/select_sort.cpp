#include <iostream>
using std::cout;

int main() {
  int arr[] = {5,9,2,7,4,3,12,6,1,5,7};
  size_t size = sizeof(arr) / sizeof(arr[0]);

  for (size_t i=0; i<size; ++i) {
    for (size_t j = i+1; j < size; ++j) {
      if (arr[j] < arr[i]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int num : arr) {
    cout << num << " ";
  }

  return 0;
}