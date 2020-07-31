//
// Created by klause on 2020/7/30.
//

#include <iostream>
#include "9_5_5.h"

int main() {
    using namespace std;
    int a = 1, b = 3, c = 9, d = 101;

    cout << "Using namespace name1: " << name1::average(a, b) << endl;
    cout << "Using namespace name2: " << name2::average(a, c) << endl;
    cout << "Using namespace name3: " << name3::average(a, d) << endl;

    return 0;
}

