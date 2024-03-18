#include<iostream>
using std::cout;
using std::endl;

class date {
  private:
  int year;
  int month;
  int day;
  public:
  date() = default;
  date(int y, int m, int d){
    year = y;
    month = m;
    day = d;
  }
  friend std::ostream& operator<<(std::ostream& os, date& rhs) {
    os << rhs.year << '-' << rhs.month << '-' << rhs.day;
    return os;
  }
  bool operator<(date& rhs){
    if(this->year < rhs.year) return true;
    if(this-> year == rhs.year) {
      if(this->month < rhs.month) return true;
      if(this->month == rhs.month) {
        if(this->day < rhs.day) return true;
      }
    }
    return false;
  }
  int operator-(date& rhs) {
    return this->year*365+this->month*30+this->day - rhs.year*365+rhs.month*30+rhs.day;
  }
  
};

int main(){
  date a(1234,12,1);
  date b(1341,11,13);
  cout << (a<b) << b-a;
}