#ifndef CHAPTER6_H
#define CHAPTER6_H
#include <cstdint>
#include <vector>
int32_t fact(int32_t val);
template<typename T> T myAbs(T a);
template<typename matrix> bool compare(matrix&, matrix&);
std::vector<int> change_val(int, std::vector<int>);
#endif