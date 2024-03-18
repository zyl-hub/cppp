#include <iostream>
#include <cstring>
#include <string>
using namespace std;
using std::string;

class Paper {
  string title;
  const char** name;
  int num;
  int word;
  public:
  Paper(string title, const char** name, int num, int word) {
    this -> title = title;
    this -> name = name;
    this -> num = num;
    this -> word = word;
  }
  bool operator==(Paper &rhs) {
    if (this -> title == rhs.title && this->word == rhs.word)
    return true;
    return false; 
  } 
};

int main() {
  const char* names1[] = {"Name1", "Name2"};
  const char* names2[] = {"Name3", "Name2", "Name4"};
  Paper a("Good Paper", names1, 2, 12345);
  Paper b("Good Paper", names2, 3, 12345);
  if(a==b) cout << "Match" << endl;
  else cout << "No Match" << endl;
  return 0;
}