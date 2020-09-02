//
// Created by klause on 2020/8/30.
//

#include <iostream>
#include "14_6_2.h"

int main() {
    using namespace std;
    Frabjous f1{"good"};
    Gloam g1{1, "name1"};
    Gloam g2{2, "name2"};
    Gloam g3{3, f1};

    g1.tell();
    cout << endl;
    g2.tell();
    cout << endl;
    g3.tell();
    cout << endl;
    return 0;
}
