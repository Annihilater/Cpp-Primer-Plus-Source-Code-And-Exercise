//
// Created by klause on 2020/7/29.
//

#include <iostream>

using namespace std;

template<typename T>
T max5(T ar[5]) {
    T max = ar[0];
    for (int i = 1; i < 5; ++i)
        if (ar[i] > max) max = ar[i];
    return max;
}

int main() {
    int ar1[5] = {0, 1, 2, 3, 4};
    double ar2[5] = {0, 1, 2, 3, 4};

    cout << max5(ar1) << endl;
    cout << max5(ar2) << endl;
    return 0;
}
