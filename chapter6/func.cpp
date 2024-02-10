#include <vector>
#include <iostream>
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div_f(int a, int b) { return a / b; }
using F = int(int, int);
using PF = int (*)(int, int);
auto pf_vec = std::vector<PF>{};
PF add_pointer = add;
PF sub_pointer = sub;
PF mul_pointer = mul;
PF div_pointer = div_f;
int main() {
  pf_vec.push_back(add_pointer);
  pf_vec.push_back(sub_pointer);
  pf_vec.push_back(mul_pointer);
  pf_vec.push_back(div_pointer);
  int a = 1, b = 2;
  for(auto ele : pf_vec) {
    std::cout << ele(a,b) << std::endl;
  }
  return 0;
}