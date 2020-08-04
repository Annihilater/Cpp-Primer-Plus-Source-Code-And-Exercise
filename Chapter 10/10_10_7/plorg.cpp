//
// Created by klause on 2020/7/31.
//

#include "plorg.h"
#include <iostream>

Plorg::Plorg() {
    strcpy(m_name, "Plorga");
    m_ci = 50;
}

Plorg::Plorg(char *name, int ci) {
    strcpy(m_name, name);
    m_ci = ci;
}

void Plorg::set_ci(int ci) {
    m_ci = ci;
}

void Plorg::show() const {
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "CI: " << m_ci << std::endl;
}
