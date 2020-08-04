//
// Created by klause on 2020/7/31.
//

#include <iostream>
#include "move.h"

int main() {
    using namespace std;

    Move m1 = {1, 2}, m2 = {3, 4}, m3;

    m1.show_move();
    m2.show_move();

    m3 = m1.add(m2);
    m3.show_move();

    m3.reset();
    m3.show_move();

    return 0;
}
