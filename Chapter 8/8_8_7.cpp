//
// Created by klause on 2020/7/29.
//

#include <iostream>

using namespace std;

struct debts {
    char name[50];
    double amount;
};

template<typename T>
T SumArray(T ar[], int n);

template<typename T>
T SumArray(T *ar[], int n);

int main() {
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe",  1300.0},
            {"Iby Stout", 1800.0},
    };
    double *pd[3];

    for (int i = 0; i < 3; ++i)
        pd[i] = &mr_E[i].amount;

    cout << "Sum : " << SumArray(things, 6) << endl;
    cout << "Sum : " << SumArray(pd, 3) << endl;
    return 0;
}

template<typename T>
T SumArray(T ar[], int n) {
    cout << "(Using Template A)";
    T sum = ar[0];
    for (int i = 1; i < n; ++i)
        sum += ar[i];
    return sum;
}

template<typename T>
T SumArray(T *ar[], int n) {
    cout << "(Using Template B)";
    T sum = *ar[0];
    for (int i = 1; i < n; ++i)
        sum += *ar[i];
    return sum;
}
