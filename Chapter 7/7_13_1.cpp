//
// Created by klause on 2020/7/22.
//

#include <iostream>

double harmonic_mean(double n, double m);

int main() {
    using namespace std;
    double n, m, r;

    cout << "Please input two number: " << endl;
    while (true) {
        cin >> n >> m;
        if (n == 0 or m == 0) break;
        cout << "x = " << n << endl;
        cout << "y = " << m << endl;
        r = harmonic_mean(n, m);
        cout << "Harmonic mean : " << r << endl;
        cout << "Please input next two number: ";
    }
    cout << "Bye!" << endl;
    return 0;
}

double harmonic_mean(double n, double m) {
    return 2.0 * n * m / (n + m);
}
