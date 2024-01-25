#include <iostream>

int main() {
    int number1 = 0, number2 = 0;
    std::cout << "Please enter two nums:" << std::endl;
    std::cin >> number1 >> number2;
    while (number1 <= number2) {
        std::cout << number1 << std::endl;
        ++number1;
    }
    return 0;
}