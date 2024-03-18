#include <iostream>
#include <string>
#include <format>
using std::string;
using std::cout;
using std::endl;
using std::ostream;
using std::format;

class goods {
  private:
  string name;
  double in_price;
  double out_price;
  int number;
  public:
  goods() = default;
  goods(string name_s, double in, double out, int num) {
    name = name_s;
    in_price = in;
    out_price = out;
    number = num;
  }
  friend ostream& operator+(ostream& os, goods &g){
    os << format("{} {} {} {}", g.name, g.in_price, g.out_price, g.number); 
    return os;
  }

  friend void avg(goods&, double&, double&);
};

void avg(goods& g, double& inPrice, double& outPrice) {
  inPrice = g.in_price/g.number;
  outPrice = g.out_price/g.number;
}

int main() {
  double inPrice, outPrice;
  goods g1("desk", 128, 150, 10), g2("chair", 25, 30, 10), g;
  cout << "输出结果" << endl;
  cout + g1 << endl;
  avg(g, inPrice, outPrice);
  cout << "平均进价：" << inPrice << endl;
  cout << "平均售价：" << outPrice << endl;
  return 0;
}