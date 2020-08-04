//
// Created by klause on 2020/7/31.
//

#include "sales.h"

int main() {
    double ar[4] = {1, 2, 3, 4};
    Sales s1 = {}, s2 = {};

    s1.setSales(ar, 4);
    s1.showSales();

    s2.setSales();
    s2.showSales();

    return 0;
}
