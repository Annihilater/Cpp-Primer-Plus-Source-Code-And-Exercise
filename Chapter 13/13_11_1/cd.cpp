//
// Created by klause on 2020/8/11.
//

#include "cd.h"
#include <iostream>

//Class Cd
Cd::Cd(const char *s1, const char *s2, int n, double x) {
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d) {
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() {
    std::strcpy(performers, "null");
    std::strcpy(label, "null");
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() {

}

void Cd::Report() const {
    std::cout << "Performers: " << performers << std::endl;
    std::cout << "Label     : " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "Playtime  : " << playtime << std::endl;
}

Cd &Cd::operator=(const Cd &d) {
    if (this == &d)
        return *this;
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


//Class Classic
Classic::Classic(const char *s1, const char *s2, const char *s3, int n, double x) : Cd(s1, s2, n, x) {
    std::strcpy(name, s3);
}

Classic::Classic(const Classic &c) : Cd(c) {
    std::strcpy(name, c.name);
}

Classic::Classic() : Cd() {
    std::strcpy(name, "default");
}

Classic::~Classic() {

}

void Classic::Report() const {
    Cd::Report();
    std::cout << "Name      : " << name << std::endl;
}

Classic &Classic::operator=(const Classic &c) {
    if (this == &c)
        return *this;
    Cd::operator=(c);
    std::strcpy(name, c.name);
    return *this;
}
