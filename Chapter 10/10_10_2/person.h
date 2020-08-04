//
// Created by klause on 2020/7/31.
//

#ifndef CPP_PRIMER_PLUS_PERSON_H
#define CPP_PRIMER_PLUS_PERSON_H

#include <iostream>

class Person {
private:
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];
public:
    Person() {
        lname = "";
        fname[0] = '\0';
    }

    Person(const std::string &ln, const char *fn = "Heyyou");

    void show() const;

    void FormalShow() const;
};


#endif //CPP_PRIMER_PLUS_PERSON_H
