//
// Created by klause on 2020/8/7.
//

#ifndef CPP_PRIMER_PLUS_STOCK20_H
#define CPP_PRIMER_PLUS_STOCK20_H

#include <string>

class Stock {
private:
    char *company;//使用前必须先用 new 进行动态内存分配
    int shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    Stock();

    Stock(const char *co, long n = 0, double pr = 0.0);

    ~Stock();

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show() const;

    const Stock &topval(const Stock &s) const;

    friend std::ostream &operator<<(std::ostream &os, const Stock &st);

};

#endif //CPP_PRIMER_PLUS_STOCK20_H
