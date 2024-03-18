#include <iostream>
using std::endl;
using std::cout;
using std::string;

void print(int n, int row) {
  // n - row - 1 ' '
  // 2*row + 1 '*'
  if (n == row) {
    return;
  }
  cout << string(n-row-1,' ');
  cout << string(2*row+1,'*') << endl;
  print(n,row+1);
}

void print(int n) {
  print(n, 0);
}

int main() {
  print(4);
  return 0;
}