//
// Created by klause on 2020/9/24.
//

#ifndef CPP_PRIMER_PLUS_STORE_H
#define CPP_PRIMER_PLUS_STORE_H

#include <fstream>

using namespace std;

class Store {
private:
    ostream &os;
public:
    explicit Store(ostream &o) : os(o) {}

    void operator()(const string &s);
};

#endif //CPP_PRIMER_PLUS_STORE_H
