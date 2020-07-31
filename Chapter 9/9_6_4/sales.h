//
// Created by klause on 2020/7/30.
//

#ifndef CPP_PRIMER_PLUS_SALES_H
#define CPP_PRIMER_PLUS_SALES_H

namespace SALES {
    const int QUARTERS = 4;
    struct Sales {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales &s, const double ar[], int n);

    void setSales(Sales &s);

    void showSales(Sales &s);
}

#endif //CPP_PRIMER_PLUS_SALES_H
