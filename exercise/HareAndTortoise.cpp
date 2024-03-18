#include <format>
#include <iostream>
#include <vector>

// if hare faster than tor return true
bool hareAndTurtoise(int time, int hare, int tor) {
  if (hare > tor) {
    if (time < 30) {
      std::cout << std::format("兔子：{} m 乌龟：{} m", hare, tor + time * 3)
                << std::endl;
      return hare > tor + time * 3;
    } else {
      return hareAndTurtoise(time - 30, hare, tor + 90);
    }
  } else {
    if (time < 10) {
      std::cout << std::format("兔子：{} m 乌龟：{} m", hare + time * 9,
                               tor + time * 3) << std::endl;
      return hare + time * 9 > tor + time * 3;
    } else {
      return hareAndTurtoise(time - 10, hare + 90, tor + 30);
    }
  }
}

// wrap function
bool hat(int time) {
  return hareAndTurtoise(time,0,0);
}

int main() {
  auto test = std::vector<int>{12, 57, 65, 100, 134, 242};
  for (auto t : test) {
    std::cout << std::format("时间: {} ",t);
    hat(t);
  }
  return 0;
}