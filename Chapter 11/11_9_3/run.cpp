//
// Created by klause on 2020/8/5.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main() {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    double max_averages;
    double min_averages;
    double average;
    double sum = 0;
    int n;

    cout << "Enter the N: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        target = 50;
        dstep = 2;

        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, VECTOR::Vector::POL);
            result = result + step;
            steps++;
        }

        cout << "After " << steps << " steps, the subject "
                                     "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        average = result.magval() / steps;
        sum += average;
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = " << average << endl;
        steps = 0;
        result.reset(0.0, 0.0);

        if (i == 0)
            max_averages = min_averages = average;

        if (average > max_averages)
            max_averages = average;
        if (average < min_averages)
            min_averages = average;
    }

    cout << "The max average step : " << max_averages << endl;
    cout << "The min average step : " << min_averages << endl;
    cout << "The total average step : " << sum / n << endl;
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
