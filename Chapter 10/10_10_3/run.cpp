//
// Created by klause on 2020/7/31.
//

#include <iostream>
#include "golf.h"

#define SIZE 3

int main() {
    using namespace std;
    Golf ar[SIZE];
    int is_done;

    ar[0].set_golf("name1", 10);
    ar[0].show_golf();

    for (int i = 1; i < SIZE; ++i) {
        cout << i + 1 << " ";
        is_done = ar[i].set_golf();
        if (!is_done) break;
    }

    for (int k = 0; k < SIZE; ++k) {
        ar[k].set_handicap(k + 100);
    }

    for (int j = 0; j < SIZE; ++j) {
        ar[j].show_golf();
    }
    return 0;
}
