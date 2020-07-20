//
// Created by klause on 2020/7/20.
//

#include <iostream>

#define SIZE 10

int main() {
    using namespace std;
    double ar[SIZE] = {};
    int i = 0, count = 0;
    double sum = 0, avg;

    cout << "Please input the array number(double): " << endl;
    while (i <= SIZE - 1 && cin >> ar[i]) {
        sum += ar[i];
        i++;
    }
    avg = sum / (i + 1);

    for (int j = 0; j < i; ++j) {
        if (ar[j] > avg)
            count++;
    }

    cout << "array: " << endl;
    for (int k = 0; k < SIZE; ++k) {
        cout << "ar[" << k << "] = " << ar[k] << endl;
    }
    cout << "sum   : " << sum << endl;
    cout << "avg   : " << avg << endl;
    cout << "count : " << count << endl;

    return 0;
}
