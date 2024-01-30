#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  const auto hex = string{"0123456789ABCDEF"};
  auto res = string{};
  string::size_type n;
  while (cin >> n) {
    if (n < hex.size())
      res += hex[n];
  }
  cout << res << endl;
  return 0;
}