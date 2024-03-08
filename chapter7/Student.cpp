#include "Student.h"

void Student::print_id() {
  std::cout << id;
}

int main() {
  Student test{"sadf", "dsf", 4};
  test.print_id();
  return 0;
}