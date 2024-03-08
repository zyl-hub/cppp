#include <iostream>

int main() {
  // 抽象类不能实例化对象
  class Calculator {
  public:
    double n_A;
    double n_B;
    Calculator(double a, double b) : n_A(a), n_B(b){};
    // 纯虚函数 = 0，在子类中一定要实现
    virtual double get_Result() = 0;
  };

  class Addition : public Calculator {
  public:
    Addition(double a, double b) : Calculator(a, b){};
    double get_Result() { return n_A + n_B; }
  };

  class Subtraction : public Calculator {
  public:
    Subtraction(double a, double b) : Calculator(a, b){};
    double get_Result() { return n_A - n_B; }
  };

  class Multiplication : public Calculator {
  public:
    Multiplication(double a, double b) : Calculator(a, b){};
    double get_Result() { return n_A * n_B; }
  };

  class Division : public Calculator {
  public:
    Division(double a, double b) : Calculator(a, b){};
    double get_Result() { return n_A / n_B; }
  };

  auto d = Division{12, 3};
  std::cout << d.get_Result();
  return 0;
}