//
// Created by klause on 2020/7/22.
//

#include <iostream>

unsigned long long factorial(unsigned long long n);

int main() {
    using namespace std;
    long long n;

    cout << "Enter an integer: ";
    while (cin >> n && n >= 0) {
        cout << "n! = " << factorial(n) << endl;
        cout << "Enter next integer: ";
    }
    cout << "Bye!" << endl;
    return 0;
}

unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
