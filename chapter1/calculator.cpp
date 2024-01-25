#include <cstdio>

using namespace std;

double add(double num1, double num2) {
    return num1+num2;
}

int main() {
    int number1, number2;
    char oper;
    printf("please enter a number: ");
    scanf("%d", &number1);
    printf("please enter an operator: ");
    scanf(" %c", &oper);
    printf("please enter a number: ");
    scanf("%d", &number2);
    if ( oper == '+') {
        printf("addition: %1f\n", add(number1, number2));
    }
    return 0;
}