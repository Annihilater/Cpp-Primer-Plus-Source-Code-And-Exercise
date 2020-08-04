//
// Created by klause on 2020/7/31.
//

#include "sales.h"
#include <iostream>

void Sales::setSales(const double *ar, int n) {
    double sum = 0;
    double _max = ar[0], _min = ar[0];
    for (int i = 0; i < QUARTERS; ++i) {
        if (i < n)
            this->sales[i] = ar[i];
        else
            this->sales[i] = 0;
        sum += this->sales[i];
        if (ar[i] > _max) _max = ar[i];
        if (ar[i] < _min) _min = ar[i];
    }
    this->average = sum / n;
    this->max = _max;
    this->min = _min;
}

void Sales::setSales() {
    using std::cout;
    using std::endl;
    using std::cin;

    double sum = 0;
    double _max, _min;

    cout << "Enter sales array: ";
    for (int i = 0; i < 4; ++i) {
        cin >> this->sales[i];
    }

    _max = _min = this->sales[0];
    for (int j = 0; j < QUARTERS; ++j) {
        sum += this->sales[j];
        if (this->sales[j] > _max) _max = this->sales[j];
        if (this->sales[j] < _min) _min = this->sales[j];
    }
    this->average = sum / (double) QUARTERS;
    this->max = _max;
    this->min = _min;

}

void Sales::showSales() const {
    using std::cout;
    using std::endl;
    cout << "Sales :" << endl;
    cout << "sales array: ";
    for (int i = 0; i < 4; ++i) {
        cout << this->sales[i] << " ";
    }
    cout << endl;
    cout << "average: " << this->average << endl;
    cout << "max: " << this->max << endl;
    cout << "min: " << this->min << endl;

}
