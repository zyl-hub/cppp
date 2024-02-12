#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <cstdint>
#include <format>
#include <istream>
#include <ostream>
#include <string>
using std::format;
using std::istream;
using std::ostream;
using std::string;
class Sales_data {
public:
  // group friend declarations together at the beginning of the class definition
  friend std::istream &operator>>(std::istream &, Sales_data &);
  friend std::ostream &operator<<(std::ostream &, const Sales_data &);
  // Sales_data operator=(const Sales_data &);
  Sales_data() = default;
  Sales_data(const string &s) : bookNo(s) {}
  Sales_data(const string &s, uint32_t n, double p)
      : bookNo(s), units_sold(n), revenue(p * n) {}
  Sales_data(std::istream &is) { is >> *this; }
  string isbn() const { return bookNo; }
  Sales_data &operator+=(const Sales_data &);

private:
  double avg_price() const;
  string bookNo;
  uint32_t units_sold = 0;
  double revenue = 0.0;
};

Sales_data operator+(const Sales_data &, const Sales_data &);
std::ostream &operator<<(std::ostream &, const Sales_data &);
std::istream &operator>>(std::istream &, Sales_data &);
inline double Sales_data::avg_price() const {
  if (units_sold)
    return revenue / units_sold;
  else
    return 0;
}

inline Sales_data &Sales_data::operator+=(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

inline istream &operator>>(istream &is, Sales_data &item) {
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}

inline ostream &operator<<(ostream &os, const Sales_data &item) {
  os << format("{} {} {} {}", item.isbn(), item.units_sold, item.revenue,
               item.avg_price());
  return os;
}

// inline Sales_data Sales_data::operator=(const Sales_data &rhs) {
//   this->bookNo = rhs.bookNo;
//   this->units_sold = rhs.units_sold;
//   this->revenue = rhs.revenue;
//   return *this;
// }

inline Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;
  sum += rhs;
  return sum;
}

#endif
