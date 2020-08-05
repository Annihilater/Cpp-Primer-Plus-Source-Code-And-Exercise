//
// Created by klause on 2020/8/4.
//

#include <iostream>
#include "vector.h"
#include <cstdlib>
#include <ctime>

int main() {
    using namespace std;
    using namespace VECTOR;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target = 100;
    double dstep = 20;

    cout << "Target Distance: 100, Step Size: 20" << endl;

    cout << steps << ": (x,y) = (" << result.xval() << ", " << result.yval() << ")" << endl;
    while (result.magval() < target) {
        direction = rand() % 360;
        step.reset(dstep, direction, Vector::POL);
        result = result + step;
        steps++;
        cout << steps << ": (x,y) = (" << result.xval() << ", " << result.yval() << ")" << endl;
    }

    cout << "After " << steps << " steps, the subject has the following location:" << endl;
    cout << "(x,y) = (" << result.xval() << ", " << result.yval() << ")" << endl << "or" << endl;
    cout << "(m,a) = (" << result.magval() << ", " << result.angval() << ")" << endl;
    cout << "Average outward distance per step = " << result.magval() / steps << endl;
    return 0;
}
