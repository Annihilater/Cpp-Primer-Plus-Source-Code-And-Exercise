//
// Created by klause on 2020/7/30.
//

#include <iostream>
#include "sales.h"

int main() {
    using namespace SALES;
    double ar[4] = {1, 2, 3, 4};
    Sales s1 = {}, s2 = {};

    setSales(s1, ar, 4);
    showSales(s1);

    setSales(s2);
    showSales(s2);

    return 0;
}
