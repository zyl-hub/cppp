#include <iostream>
#include <map>
#include "Sales_item.h"

int main() {
    Sales_item item1;
    std::map<std::string, int> counts;
    while (std::cin >> item1) {
        // this takes advantage of the fact that if you reference a map element using [] and the entry does not exist it will get created and default initialized
        counts[item1.isbn()]++;
    }
    for (const auto& pair : counts) {
        std::cout << "ISBN: " << pair.first << "TIMES: " << pair.second << std::endl;
    }
    return 0;
}