#include <format>
#include <iostream>

// if hare faster than tor return true
bool hareAndTortoise(int time, int hare, int tor) {
  if (hare > tor) {
    if (time < 30) {
      std::cout << std::format("兔子：{} m 乌龟：{} m", hare, tor + time * 3) << std::endl;
      return hare > tor + time * 3;
    } else {
      return hareAndTortoise(time - 30, hare, tor + 30 * 3);
    }
  } else {
    if (time < 10) {
      std::cout << std::format("兔子：{} m 乌龟：{} m", hare + time * 9,
                               tor + time * 3);
      return hare + time * 9 > tor + time * 3;
    } else {
      return hareAndTortoise(time - 10, hare + 90, tor + 30);
    }
  }
}

int main() {
  if (hareAndTortoise(14, 0, 0))
    std::cout << "兔子胜利" << std::endl;
  else {
    std::cout << "乌龟胜利" << std::endl;
  }
  return 0;
}