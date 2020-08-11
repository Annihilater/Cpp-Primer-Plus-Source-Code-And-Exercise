//
// Created by klause on 2020/8/7.
//

#include "stock20.h"
#include <iostream>

const int STKS = 4;

int main() {
    using namespace std;
    Stock stocks[STKS] = {
            Stock("NanoSmart", 12, 20.0),
            Stock("Boffo Objects", 200, 2.0),
            Stock("Monolithic", 130, 3.25),
            Stock("Fleep Enterprises", 60, 6.5),
    };
    std::cout << "Stock holding:\n";
    int st;
    for (st = 0; st < STKS; st++) {
//        stocks[st].show();
        cout << stocks[st];//重载 << 运算符代替 show 成员函数
    }

    const Stock *top = &stocks[0];
    for (st = 1; st < STKS; st++) {
        top = &top->topval(stocks[st]);
    }
    std::cout << "\nMost valuable holding:\n";
    top->show();
    return 0;
}
