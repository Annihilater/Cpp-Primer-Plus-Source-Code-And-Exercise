//
// Created by klause on 2020/7/23.
//
#include <iostream>

using namespace std;

void iquote(int n) {
    cout << "\"" << n << "\"";
}

void iquote(double x) {
    cout << '"' << x << '"';
}

void iquote(const char *str) {
    cout << "\"" << str << "\"";
}

int main() {
    using namespace std;
    int n = 1;
    double m = 2;
    const char *p = "hello";

    iquote(n);
    cout << endl;
    iquote(m);
    cout << endl;
    iquote(p);

    return 0;
}
