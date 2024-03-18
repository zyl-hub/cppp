#include <iostream>
using namespace std;
int swap(int &x,int* y, int z=1){
  static int b=x;
  b+=2;
  x=x-z+b;
  return b;
}

int main() {
  int a=8,b=5;
  cout << swap(a,&b)<<" " << a << " " << b <<endl;
  cout << swap(a,&b)<<" " << a << " " << b <<endl;
  return 0;
}
