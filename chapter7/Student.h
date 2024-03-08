#include "Person.h"

class Student : public Person {
private:
  int id;
  string hhobby;
public:
  void print_id();
  Student() = default;
  Student(string add, string nam, int id) {
    address = add;
    name = nam;
    this -> id = id;
  }
};