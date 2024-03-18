#include <iostream>
#include <vector>
using std::vector;
using std::cout;

bool reverse(vector<int> nums) {
  for(size_t i = 0; i < nums.size()/2; ++i) {
    if(nums[i] != nums[nums.size() - 1 - i]) return false;
  }
  return true;
}

int main() {
  auto test = vector<int>{1,3,1};
  cout << reverse(test);
  return 0;
}