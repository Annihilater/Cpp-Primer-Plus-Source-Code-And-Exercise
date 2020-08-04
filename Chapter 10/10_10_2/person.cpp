//
// Created by klause on 2020/7/31.
//

#include "person.h"
#include <iostream>

Person::Person(const std::string &ln, const char *fn) {
    strcpy(fname, fn);
    lname = ln;
}

void Person::show() const {
    std::cout << "Show: " << fname << " " << lname << std::endl;
}

void Person::FormalShow() const {
    std::cout << "FormalShow: " << lname << " " << fname << std::endl;
}
