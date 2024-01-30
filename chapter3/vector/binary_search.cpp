#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  auto ivec = vector<int32_t>{};
  int32_t temp;
  int32_t sought = 10;
  while (cin >> temp) {
  ivec.push_back(temp);
  }
  auto beg = ivec.begin();
  auto end = ivec.end();
  
  auto mid = ivec.begin() + (end - beg)/2;
  while (mid!=end && *mid!=sought) {
    if (sought < *mid) {
      end = mid;
    } else {
    beg = mid + 1;
    }
    mid = beg + (end - beg)/2;
  }
  cout << *mid;
  return 0;
}