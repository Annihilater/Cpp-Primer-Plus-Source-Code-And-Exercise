//
// Created by klause on 2020/7/17.
//

#include <iostream>

int main() {
    using namespace std;
    int min, max, i, sum = 0;

    cout << "Please input min number: ";
    cin >> min;
    cout << "Please input max number: ";
    cin >> max;
    i = min;
    while (i <= max) {
        cout << i << endl;
        sum += i;
        i++;
    }
    cout << sum;
    return 0;
}
