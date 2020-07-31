//
// Created by klause on 2020/7/30.
//

#include <iostream>
#include "golf.h"

#define SIZE 3

int main() {
    using namespace std;
    golf ar[SIZE];
    int is_done;

    setgolf(ar[0], "name1", 10);
    showgolf(ar[0]);

    for (int i = 1; i < SIZE; ++i) {
        cout << i + 1 << " ";
        is_done = setgolf(ar[i]);
        if (!is_done) break;
    }

    for (int k = 0; k < SIZE; ++k) {
        handicap(ar[k], k + 100);
    }

    for (int j = 0; j < SIZE; ++j) {
        showgolf(ar[j]);
    }
    return 0;
}
