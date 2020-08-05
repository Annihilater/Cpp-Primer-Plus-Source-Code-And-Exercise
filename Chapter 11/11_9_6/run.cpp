//
// Created by klause on 2020/8/5.


#include <iostream>
#include "stonewt.h"

#define SIZE 6

int main() {
    using namespace std;
    Stonewt ar[SIZE] = {153, 154, 155};
    Stonewt tmp = Stonewt(11, 0);
    Stonewt max = ar[0];
    Stonewt min = ar[0];
    int count = 0;

    for (int i = 3; i < SIZE; ++i) {
        ar[i] = Stonewt(i * 100);
    }

    for (int k = 0; k < SIZE; ++k) {
        if (ar[k] > max)max = ar[k];
        if (ar[k] < min)min = ar[k];
        if (ar[k] == tmp) count++;
    }

    for (int j = 0; j < SIZE; ++j) {
        cout << ar[j];
    }
    cout << "Max: " << max;
    cout << "Min: " << min;
    cout << "Count: " << count << endl;
    return 0;
}
