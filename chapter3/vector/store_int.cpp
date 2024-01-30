#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  int32_t temp;
  auto ivec = vector<int32_t>{};
  while (cin >> temp) {
    ivec.push_back(temp);
  }
  for (auto i : ivec)
    cout << i << endl;
  return 0;
}
