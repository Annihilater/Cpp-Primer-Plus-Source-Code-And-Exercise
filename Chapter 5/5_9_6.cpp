//
// Created by klause on 2020/7/17.
//

#include <iostream>

int main() {
    using namespace std;
    int sales[3][12] = {}, sum = 0;
    string month[12] = {"January",
                        "February",
                        "March",
                        "April",
                        "May",
                        "June",
                        "July",
                        "August",
                        "September",
                        "October",
                        "November",
                        "December"};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << "Please input the sales of " << i + 1 << " year " << month[j] << " : ";
            cin >> sales[i][j];
            sum += sales[i][j];
        }
    }
    cout << "Sum sales : " << sum << endl;
    return 0;
}
