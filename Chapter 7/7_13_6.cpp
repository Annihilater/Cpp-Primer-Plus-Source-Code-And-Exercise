//
// Created by klause on 2020/7/22.
//

#include <iostream>

#define MAXSIZE 10

using namespace std;

int fill_array(double ar[], int n);

void show_array(double ar[], int n);

void reverse_array(double ar[], int n);

int main() {
    double ar[MAXSIZE] = {};
    int n;

    n = fill_array(ar, MAXSIZE);
    show_array(ar, n);
    reverse_array(ar, n);
    show_array(ar, n);
    return 0;
}

int fill_array(double ar[], int n) {
    int i;

    cout << "Enter number(max numbers : " << n << "): " << endl;
    for (i = 0; i < n; ++i) {
        cin >> ar[i];
        if (cin.fail())break;
    }
    return i;
}

void show_array(double ar[], int n) {
    cout << "Array : " << endl;
    for (int i = 0; i < n; ++i) {
        cout << ar[i] << " ";
    }
    cout << endl;
}

void reverse_array(double ar[], int n) {
    int mid = n / 2;
    int i = 1;
    double tmp;

    cout << "Reverse the array!" << endl;
    while (i <= mid) {
        tmp = ar[i];
        ar[i] = ar[n - 1 - i];
        ar[n - 1 - i] = tmp;
        i++;
    }
}
