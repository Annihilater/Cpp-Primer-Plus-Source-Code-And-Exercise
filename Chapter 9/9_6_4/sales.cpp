//
// Created by klause on 2020/7/30.
//

#include "sales.h"
#include <iostream>

namespace SALES {
    void setSales(Sales &s, const double ar[], int n) {
        double sum = 0;
        double max = ar[0], min = ar[0];
        for (int i = 0; i < QUARTERS; ++i) {
            if (i < n)
                s.sales[i] = ar[i];
            else
                s.sales[i] = 0;
            sum += s.sales[i];
            if (ar[i] > max) max = ar[i];
            if (ar[i] < min) min = ar[i];
        }
        s.average = sum / n;
        s.max = max;
        s.min = min;
    }

    void setSales(Sales &s) {
        using std::cout;
        using std::endl;
        using std::cin;

        double sum = 0;
        double max, min;

        cout << "Enter sales array: ";
        for (int i = 0; i < 4; ++i) {
            cin >> s.sales[i];
        }

        max = s.sales[0];
        min = s.sales[0];
        for (int j = 0; j < QUARTERS; ++j) {
            sum += s.sales[j];
            if (s.sales[j] > max) max = s.sales[j];
            if (s.sales[j] < min) min = s.sales[j];
        }
        s.average = sum / (double) QUARTERS;
        s.max = max;
        s.min = min;
    }

    void showSales(Sales &s) {
        using std::cout;
        using std::endl;
        cout << "Sales :" << endl;
        cout << "sales array: ";
        for (int i = 0; i < 4; ++i) {
            cout << s.sales[i] << " ";
        }
        cout << endl;
        cout << "average: " << s.average << endl;
        cout << "max: " << s.max << endl;
        cout << "min: " << s.min << endl;
    }
}
