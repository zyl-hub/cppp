
#include "Sales_data.h"
#include <iostream>
#include <string>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int main() {
  Sales_data total(cin);       // variable to hold the running sum
  if (!total.isbn().empty()) { // read the first transaction
    std::istream &is = cin;

    while (is) {
      Sales_data trans(is); // variable to hold data for the next transaction
      if (!is)
        break;
      if (total.isbn() == trans.isbn())
        total += trans; // update the running total
      else {
        cout << total << endl; // print the results
        total = trans;         // process the next book
      }
    }
    cout << total << endl;       // print the results
  } else {                       // there was no input
    cerr << "No data?!" << endl; // notify the user
    return -1;
  }
  return 0;
}