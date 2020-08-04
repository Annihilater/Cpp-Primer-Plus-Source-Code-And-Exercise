//
// Created by klause on 2020/7/31.
//

#include <iostream>
#include "plorg.h"

int main() {
    using namespace std;
    char name2[] = "hello";
    Plorg p1, p2 = {name2, 40};

    p1.show();
    p1.set_ci(60);
    p1.show();

    p2.show();
    p2.set_ci(70);
    p2.show();
    return 0;
}
