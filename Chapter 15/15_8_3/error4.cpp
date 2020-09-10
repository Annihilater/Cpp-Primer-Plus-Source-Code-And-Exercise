//
// Created by klause on 2020/9/10.
//

#include <iostream>
#include <cmath>
#include "exc_mean.h"

double hmean(double a, double b);

double gmean(double a, double b);

int main() {
    using namespace std;

    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y) {
        try {
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        } catch (bad_hmean &bg) {
            bg.what();
            bg.mesg();
            cout << "Sorry, you don't get to play to play any more." << endl;
            break;
        } catch (bad_gmean &hg) {
            hg.what();
            hg.mesg();
            cout << "Sorry, you don't get to play to play any more." << endl;
            break;
        }
    }
    cout << "Bye!" << endl;
    return 0;
}


double hmean(double a, double b) {
    if (a == -b)
        throw bad_hmean("hmean() invalid arguments: a = -b\n", a, b);
//        throw HmeanExcp();
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
    if (a < 0 || b < 0)
        throw bad_gmean("gmean() arguments should be >= 0\n", a, b);
//        throw GmeanExcp();
    return sqrt(a * b);
}
