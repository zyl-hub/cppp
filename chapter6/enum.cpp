#include <iostream>

enum week {
  Mon, Tue, Wed, Thu, Fri, Sat, Sun
};

int main() {
  week w1 = Mon;
  week w2 = Tue;
  std::cout << "w1 = " << w1 << std::endl;
  std::cout << "w2 = " << w2 << std::endl;
  return 0;
}