//
// Created by klause on 2020/9/24.
//

#include <iostream>

using namespace std;

template<typename T>
long double sum_value(T value) { return value; }

template<typename T, typename... Args>
long double sum_value(T value, Args...args) { return value + sum_value(args...); }

int main() {
    cout << sum_value(1, 2, 3, 4) << endl;
    cout << sum_value(1.1, 2.2, 3, 4.8, 5.2) << endl;
    cout << sum_value(70000L, 3.56, 'c', 58, -843.66) << endl;
    cout << sum_value(4, 5, 6, 7, 8, 9, 10) << endl;
    cout << sum_value(4, 5, 6) << endl;
    return 0;
}
