/*
// Only one disk may be moved at a time.
// Each move consists of taking the upper disk from one of the stacks and
placing it on top of another stack or on an empty rod.
// No disk may be placed on top of a disk that is smaller than it.
*/
#include <format>
#include <iostream>

int hanoi(int n) {
  if (n == 1)
    return 1;
  return hanoi(n - 1) * 2 + 1;
}

void move(char x, char y) {
  std::cout << std::format("{} -> {}", x, y) << std::endl;
}

void hanoi_with_trans(int n, char a, char b, char c) {
  if (n == 1) {
    move(a, c);
    return;
  }
  hanoi_with_trans(n - 1, a, c, b);
  move(a, c);
  hanoi_with_trans(n - 1, b, a, c);
}

int main() {
  for (int i = 1; i < 10; ++i)
    std::cout << std::format("移动{}个圆盘需要的次数为{}", i, hanoi(i))
              << std::endl;
  hanoi_with_trans(3, 'A', 'B', 'C');
  return 0;
}