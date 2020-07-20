//
// Created by klause on 2020/7/17.
//

#include <iostream>

int main() {
    using namespace std;
    int n;

    cout << "Please input a integer number: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout << ".";
        }
        for (int k = 0; k <= i; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
