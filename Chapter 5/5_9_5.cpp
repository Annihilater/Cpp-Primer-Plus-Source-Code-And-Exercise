//
// Created by klause on 2020/7/17.
//

#include <iostream>
#include <string>

int main() {
    using namespace std;
    int sales[12] = {}, sum = 0;
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

    for (int i = 0; i < 12; ++i) {
        cout << "Please input the sales of " << month[i] << " : ";
        cin >> sales[i];
        sum += sales[i];
    }
    cout << "Sum sales : " << sum << endl;
    return 0;
}
