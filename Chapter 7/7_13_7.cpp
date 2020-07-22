//
// Created by klause on 2020/7/22.
//

#include <iostream>

const int Max = 5;
using namespace std;

double *fill_array(double *start);

void show_array(double *start, const double *end);

void revalue(double *start, const double *end, double r);

int main() {
    double properties[Max], *end;

    end = fill_array(properties);
    show_array(properties, end);

    cout << "Enter revaluation factor: ";
    double factor;
    while (!(cin >> factor)) {
        cin.clear();
        while (cin.get() != '\n')continue;
        cout << "Bad input; Please enter a number: ";
    }

    revalue(properties, end, factor);
    show_array(properties, end);
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

double *fill_array(double *start) {
    double *p = start, temp;
    int j = 0;
    while (j < Max) {
        cout << "Enter value #" << (j + 1) << ": ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Bad input; input process terminated." << endl;
            break;
        } else if (temp < 0)
            break;

        *p = temp;
        p++;
        j++;
    }
    return p;
}

void show_array(double *start, const double *end) {
    double *p = start;
    while (p < end) {
        cout << "Property #" << (p - start + 1) << ": $";
        cout << *p << endl;
        p++;
    }
}

void revalue(double *start, const double *end, double r) {
    double *p = start;
    while (p < end) {
        *p *= r;
        p++;
    }
}
