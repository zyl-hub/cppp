#include "Sales_data.h"
#include <iostream>

int main() {
  auto c1 = Sales_data{};
  auto c2 = Sales_data{"1"};
  auto c3 = Sales_data{"1", 12, 20};
  auto c4 = Sales_data{std::cin};
}