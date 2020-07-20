//
// Created by klause on 2020/7/17.
//

#include <iostream>

int main() {
    using namespace std;
    int n, sum = 0;

    cout << "Please input a integer(0 to quit): ";
    cin >> n;

    while (n) {
        sum += n;
        cout << "Sum : " << sum << endl;
        cout << "Please input a integer(0 to quit): ";
        cin >> n;
    }
    cout << "Bye!";
    return 0;
}
