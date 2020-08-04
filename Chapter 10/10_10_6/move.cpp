//
// Created by klause on 2020/7/31.
//

#include "move.h"
#include <iostream>

Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::show_move() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

Move Move::add(const Move &m) const {
    Move result;
    result.x = x + m.x;
    result.y = y + m.y;
    return result;
}

void Move::reset(double a, double b) {
    x = a;
    y = b;
}
