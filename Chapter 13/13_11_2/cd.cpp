//
// Created by klause on 2020/8/11.
//

#include "cd.h"
#include <iostream>

//Class Cd
Cd::Cd(const char *s1, const char *s2, int n, double x) {
    unsigned int len1 = strlen(s1);
    unsigned int len2 = strlen(s1);
    performers = new char[len1 + 1];
    label = new char[len2 + 1];
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    performers[-1] = '\0';
    label[-1] = '\0';
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d) {
    unsigned int len1 = strlen(d.performers);
    unsigned int len2 = strlen(d.label);
    performers = new char[len1 + 1];
    label = new char[len2 + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    performers[-1] = '\0';
    label[-1] = '\0';
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() {
    unsigned int len1 = strlen("null");
    unsigned int len2 = strlen("null");
    performers = new char[len1 + 1];
    label = new char[len2 + 1];
    std::strcpy(performers, "null");
    std::strcpy(label, "null");
    performers[-1] = '\0';
    label[-1] = '\0';
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() {
    delete[]performers;
    delete[]label;
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

    unsigned int len1 = strlen(d.performers);
    unsigned int len2 = strlen(d.label);
    performers = new char[len1 + 1];
    label = new char[len2 + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    performers[-1] = '\0';
    label[-1] = '\0';
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


//Class Classic
Classic::Classic(const char *s1, const char *s2, const char *s3, int n, double x) : Cd(s1, s2, n, x) {
    unsigned int len = strlen(s3);
    name = new char[len + 1];
    std::strcpy(name, s3);
    name[-1] = '\0';
}

Classic::Classic(const Classic &c) : Cd(c) {
    unsigned int len = strlen(c.name);
    name = new char[len + 1];
    std::strcpy(name, c.name);
    name[-1] = '\0';
}

Classic::Classic() : Cd() {
    unsigned int len = strlen("default");
    name = new char[len + 1];
    std::strcpy(name, "default");
    name[-1] = '\0';
}

Classic::~Classic() {
    delete[]name;
}

void Classic::Report() const {
    Cd::Report();
    std::cout << "Name      : " << name << std::endl;
}

Classic &Classic::operator=(const Classic &c) {
    if (this == &c)
        return *this;
    Cd::operator=(c);
    unsigned int len = strlen(c.name);
    name = new char[len + 1];
    std::strcpy(name, c.name);
    name[-1] = '\0';
    return *this;
}
