#include <iostream>
#include <string>
#include <vector>

int main() {
  const auto scores = std::vector<std::string>{"F", "D", "C", "B", "A", "A++"};
  std::cout << "input score: " << std::endl;
  int32_t grade;
  std::cin >> grade;
  auto lettergrade = std::string{};
  if (grade < 60) {
    lettergrade = scores[0];
  } else {
    lettergrade = scores[(grade - 50) / 10];
    if (grade % 10 > 7) {
      lettergrade += '+';
    } else if (grade % 10 < 3) {
      lettergrade += '-';
    }
  }
  std::cout << "The grade is " << lettergrade << std::endl;
  return 0;
}