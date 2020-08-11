//
// Created by klause on 2020/8/6.
//

#include "cow.h"
#include <string>
#include <iostream>

Cow::Cow() {
    strcpy(name, "name");
    hobby = new char[6];
    strcpy(hobby, "hobby");
    weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt) {
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c) {
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow() {
    delete hobby;
}

Cow &Cow::operator=(const Cow &c) {
    strcpy(name, c.name);
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const {
    std::cout << "name : " << name << std::endl;
    std::cout << "hobby : " << hobby << std::endl;
    std::cout << "weight : " << weight << std::endl;
}
