//
// Created by klause on 2020/7/29.
//

#include <iostream>

template<typename T>
T my_max(T a, T b) {
    return a >= b ? a : b;
}

int main() {
    using namespace std;
    int a1 = 1, b1 = 2;
    double a2 = 1, b2 = 2;

    cout << "Max is " << my_max(a1, b1) << endl;
    cout << "Max is " << my_max(a2, b2) << endl;
    return 0;
}


