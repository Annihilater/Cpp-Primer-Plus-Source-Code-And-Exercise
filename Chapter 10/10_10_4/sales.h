//
// Created by klause on 2020/7/31.
//

#ifndef CPP_PRIMER_PLUS_SALES_H
#define CPP_PRIMER_PLUS_SALES_H

class Sales {
private:
    static const int QUARTERS = 4;
    double sales[QUARTERS];
    double average;
    double max;
    double min;
public:
    void setSales(const double ar[], int n);

    void setSales();

    void showSales() const;
};

#endif //CPP_PRIMER_PLUS_SALES_H
