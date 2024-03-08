#include <iostream>

int main() {
  class Shape {
  protected:
    int width;
    int height;

  public:
    Shape(int width = 0, int height = 0) {
      this->width = width;
      this->height = height;
    }
    virtual int area() {return 0;};
  };

  class Rectangle : public Shape {
  public:
    Rectangle(int width = 0, int height = 0) : Shape(width, height){}; 
    int area() { return width * height; }
  };

  class Triangle : public Shape {
    int area() { return width * height / 2.0; };
  };

  auto test = Rectangle{12, 34};

  std::cout << test.area();
  Shape* test_ptr = nullptr;
  test_ptr = &test;
  std::cout << test_ptr -> area();

  return 0;
}