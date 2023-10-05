//
// Created by midoe on 10/5/2023.
//

#include "bigDecimalProject.h"
#include <string>
#include <deque>

bigDecimalProject::bigDecimalProject(std::string bigDecimal) : bigDecimal(bigDecimal), size(bigDecimal.size()) {
    for(char& c : bigDecimal) {
        int digit = c - '0';  // Convert char to int
        container.push_back(digit);
    }
}

int bigDecimalProject::getSize() {
    return size;
}


