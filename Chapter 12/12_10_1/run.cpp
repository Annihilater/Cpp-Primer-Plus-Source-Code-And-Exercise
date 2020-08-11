//
// Created by klause on 2020/8/6.
//

#include <iostream>
#include "cow.h"

int main() {
    using namespace std;
    Cow c1;
    Cow c2 = {"name2", "hobby2", 40};
    Cow c3("name3", "hobby3", 50);
    Cow c4;

    c1.ShowCow();
    c2.ShowCow();
    c3.ShowCow();
    c4 = c3;
    c4.ShowCow();
    return 0;
}
