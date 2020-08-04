//
// Created by klause on 2020/7/31.
//

#ifndef CPP_PRIMER_PLUS_10_9_9_H
#define CPP_PRIMER_PLUS_10_9_9_H

#include <string>

class Stock {
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    const std::string get_company() const;

    int get_shares() const;

    double get_share_val() const;

    double get_total_val() const;

    Stock();

    Stock(const std::string &co, long n = 0, double pr = 0.0);

    ~Stock();

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show() const;

    const Stock &topval(const Stock &s) const;


};

Stock::Stock() {

}

Stock::Stock(const std::string &co, long n, double pr) {

}

Stock::~Stock() {

}

void Stock::buy(long num, double price) {

}

void Stock::sell(long num, double price) {

}

void Stock::update(double price) {

}

void Stock::show() const {

}

const Stock &Stock::topval(const Stock &s) const {
    return s;
}

const std::string Stock::get_company() const {
    return company;
}

int Stock::get_shares() const {
    return shares;
}

double Stock::get_share_val() const {
    return share_val;
}

double Stock::get_total_val() const {
    return total_val;
}


#endif //CPP_PRIMER_PLUS_10_9_9_H
