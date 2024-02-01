#include <cstdint>
#include <iostream>
#include <ostream>

int main() {
  char ch;
  uint32_t vowel_counter = 0;
  uint32_t space_counter = 0;
  uint32_t tab_counter = 0;
  uint32_t newline_counter = 0;
  uint32_t ff_counter = 0;
  uint32_t fl_counter = 0;
  uint32_t fi_counter = 0;
  bool last_f = false;

  // use cin.get to get char including space, tab and newline
  while (std::cin.get(ch)) {
    switch (ch) {
    case 'a':
    case 'e':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      ++vowel_counter;
      break;
    case 'f':
      if (last_f) {
        ++ff_counter;
        last_f = false;
      } else {
        last_f = true;
      }
      break;
    case 'l':
      if (last_f) {
        ++fl_counter;
        last_f = false;
      }
      break;
    case 'i':
      if (last_f) {
        ++fi_counter;
        last_f = false;
      }
      ++vowel_counter;
      break;
    case ' ':
      ++space_counter;
      break;
    case '\t':
      ++tab_counter;
      break;
    case '\n':
      ++newline_counter;
      break;
    }
  }
  std::cout << "the number of vowels is " << vowel_counter << std::endl;
  std::cout << "the number of space is " << space_counter << std::endl;
  std::cout << "the number of tab is " << tab_counter << std::endl;
  std::cout << "the number of newline is " << newline_counter << std::endl;
  std::cout << "the number of ff is " << ff_counter << std::endl;
  std::cout << "the number of fl is " << fl_counter << std::endl;
  std::cout << "the number of fi is " << fi_counter << std::endl;
  return 0;
}