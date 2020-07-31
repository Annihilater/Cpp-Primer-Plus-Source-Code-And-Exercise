//
// Created by klause on 2020/7/30.
//

#include "golf.h"
#include <iostream>

void setgolf(golf &g, const char *name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g) {
    int is_finish = 1;
    char tmp[Len];
    std::cout << "Enter name: ";
    std::cin.getline(tmp, Len);
    if (!strcmp(tmp, ""))
        is_finish = 0;
    else {
        strcpy(g.fullname, tmp);
        std::cout << "Enter the handicap: ";
        std::cin >> g.handicap;
    }
    return is_finish;
}

void handicap(golf &g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf &g) {
    std::cout << "fullname: " << g.fullname << std::endl;
    std::cout << "handicap: " << g.handicap << std::endl;
}
