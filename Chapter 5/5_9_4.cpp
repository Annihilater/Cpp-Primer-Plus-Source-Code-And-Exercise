//
// Created by klause on 2020/7/17.
//

#include <iostream>

#define BASE 100

double investment1(double n, int m);

double investment2(double n, int m);

int main() {
    using namespace std;
    int n = 1;
    while (investment1(BASE, n) >= investment2(BASE, n))
        n++;

    cout << n << " years later Cleo's investment is big than Daphne !" << endl;
    cout << "Cleo's   investment : " << investment1(BASE, n) << endl;
    cout << "Daphne's investment : " << investment2(BASE, n) << endl;
    return 0;
}

double investment1(double n, int m) {
    double sum = n;
    for (int i = 0; i < m; ++i) {
        sum += n * 0.1;
    }
    return sum;
}

double investment2(double n, int m) {
    double sum = n;
    for (int i = 0; i < m; ++i) {
        sum = sum * (1 + 0.05);
    }
    return sum;
}
