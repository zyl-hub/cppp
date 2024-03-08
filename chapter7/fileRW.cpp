#include <fstream>
#include <iostream>

int main() {
  std::fstream fs;
  fs.open("test.txt", std::ios::out);
  if (fs.is_open()) {
    std::cout << "文件打开成功" << std::endl;
    fs << "test\n"
       << "test";
  } else {
    std::cout << "打开失败" << std::endl;
  }
  fs.close();
  fs.open("test.txt", std::ios::in);
  if(fs.is_open()) {
    char buf[1024] = {0};
    // while (fs >> buf) {
    //   std::cout << buf << std::endl;
    // }
    while(fs.getline(buf, sizeof(buf))){
      std::cout << buf << std::endl;
    }
  } else {
    std::cout << "打开失败" << std::endl;
  }
  return 0;
}