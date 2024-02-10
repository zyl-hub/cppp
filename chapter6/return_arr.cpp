#include <cstdlib>
#include <iostream>
#include <string>

using arrT = std::string[10];

std::string (&ref_arr(int arr[10]))[10];

std::string decl[10] = {};
arrT& ref_arr_alias(int i);
auto ref_arr_trial(int i) -> std::string(&)[10];
decltype(decl) &ref_arr_decl(int i);

int main() {
}