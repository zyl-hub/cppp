#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <istream>
#include <ostream>
#include <string>
using std::istream;
using std::ostream;
using std::string;
class Person {
public:
  string name{};
  string address{};
  friend istream &operator>>(istream &is, Person &item);
  Person() = default;
  Person(const string &name_s, const string &address_s)
      : name(name_s), address(address_s){};

  string get_name() const { return name; }
  string get_addr() const { return address; }

private:
  
};

istream &operator>>(istream &is, Person &item);
ostream &operator<<(istream &os, const Person &item);

inline istream &operator>>(istream &is, Person &item) {
  is >> item.name >> item.address;
  return is;
}

inline ostream &operator<<(ostream &os, const Person &item) {
  os << item.get_name() << " " << item.get_addr();
  return os;
}

#endif