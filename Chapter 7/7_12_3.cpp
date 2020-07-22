//
// Created by klause on 2020/7/22.
//

#include <iostream>

void func(int ar[], int n, int m);

int main() {
    using namespace std;
    int n = 4, m = 5;
    int ar[4] = {0, 1, 2, 3};

    func(ar, n, m);
    return 0;
}

void func(int ar[], int n, int m) {
    for (int i = 0; i < n; ++i) {
        ar[i] = m;
    }
}
