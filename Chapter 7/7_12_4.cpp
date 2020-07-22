//
// Created by klause on 2020/7/22.
//

#include <iostream>

void func(int *p1, const int *p2, int m);

int main() {
    using namespace std;
    int m = 5;
    int ar[4] = {0, 1, 2, 3};

    func(&ar[0], &ar[3], m);
    return 0;
}

void func(int *p1, const int *p2, int m) {
    int *p = p1;
    while (p <= p2) {
        *p = m;
        p++;
    }
}
