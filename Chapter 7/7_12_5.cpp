//
// Created by klause on 2020/7/22.
//

#include <iostream>

double func(const double ar[], int n);

int main() {
    using namespace std;
    double ar[4] = {1, 2, 3, 4}, max;
    max = func(ar, 4);
    cout << "The max number of array : " << max;
    return 0;
}

double func(const double ar[], int n) {
    double max = ar[0];
    for (int i = 0; i < n; ++i)
        if (ar[i] > max) max = ar[i];
    return max;
}
