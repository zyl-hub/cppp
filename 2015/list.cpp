#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int num[10] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45};
  int oper = 0;
  while (oper != 3) {
    cout << "选择以下数组信息（删除/插入/退出操作菜单）" << endl
         << "1:删除:" << endl
         << "2:插入:" << endl
         << "3:退出:" << endl;
    cin >> oper;
    if(oper == 1) {
      int num_to_del = 0;
      cin >> num_to_del;
      for(int i=0; i<10; ++i){
        if (num[i] == num_to_del && num);
      }
    }
  }
}