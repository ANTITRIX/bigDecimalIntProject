//
// Created by midoe on 10/5/2023.
//
#ifndef BIGDECIMALPROJECT_H
#define BIGDECIMALPROJECT_H

#include <string>
#include <deque>

class bigDecimalProject {
private:
    std::string bigDecimal;
    std::deque<int> container;
    int size;

public:
    bigDecimalProject(std::string bigDecimal);
    int getSize();
    bigDecimalProject operator+(bigDecimalProject num2);
};

#endif // BIGDECIMALPROJECT_H

