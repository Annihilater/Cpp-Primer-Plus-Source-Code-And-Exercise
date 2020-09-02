//
// Created by klause on 2020/8/30.
//

#ifndef CPP_PRIMER_PLUS_14_6_3_H
#define CPP_PRIMER_PLUS_14_6_3_H

#include <iostream>

using namespace std;

class Frabjous {
private:
    char fab[20]{};
public:
    explicit Frabjous(const char *s = "C++") {
        strcpy(fab, s);
    }

    virtual void tell() { cout << fab; }
};

class Gloam : private Frabjous {
private:
    int glip;
public:
    explicit Gloam(int g = 0, const char *s = "C++");

    Gloam(int g, Frabjous f);

    void tell() override;
};

#endif //CPP_PRIMER_PLUS_14_6_3_H
