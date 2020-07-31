//
// Created by klause on 2020/7/30.
//

#include <iostream>

using namespace std;

extern int x;

namespace {
    int y = -4;
}

void another() {
    cout << "another(): " << x << ", " << y << endl;
}
