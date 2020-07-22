//
// Created by klause on 2020/7/22.
//

#include <iostream>

#define MAXSIZE 10

using namespace std;

int input(double ar[], int n);

void show(double ar[], int n);

double avg(const double ar[], int n);

int main() {
    double ar[MAXSIZE] = {};
    int n;

    n = input(ar, MAXSIZE);
    show(ar, n);
    cout << "Avg : " << avg(ar, n) << endl;
    return 0;
}

int input(double ar[], int n) {
    double tmp;
    int i;
    cout << "Enter 10 number for Golf results: " << endl;
    for (i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp < 0) break;
        ar[i] = tmp;
    }
    return i;
}

void show(double ar[], int n) {
    cout << "Golf results: ";
    for (int i = 0; i < n; ++i) {
        cout << ar[i] << " ";
    }
    cout << endl;
}

double avg(const double ar[], int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += ar[i];
    }
    return sum / n;
}
