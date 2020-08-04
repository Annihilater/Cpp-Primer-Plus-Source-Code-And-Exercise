//
// Created by klause on 2020/7/31.
//

#include "golf.h"
#include <iostream>

void Golf::set_golf(const char *name, int hc) {
    strcpy(this->fullname, name);
    this->handicap = hc;
}

int Golf::set_golf() {
    int is_finish = 1;
    char tmp[Len];
    std::cout << "Enter name: ";
    std::cin.getline(tmp, Len);
    if (!strcmp(tmp, ""))
        is_finish = 0;
    else {
        strcpy(this->fullname, tmp);
        std::cout << "Enter the handicap: ";
        std::cin >> this->handicap;
        std::cin.get();                     //除去换行符
    }
    return is_finish;
}

void Golf::set_handicap(int hc) {
    this->handicap = hc;
}

void Golf::show_golf() const {
    std::cout << "fullname: " << this->fullname << std::endl;
    std::cout << "handicap: " << this->handicap << std::endl;
}
