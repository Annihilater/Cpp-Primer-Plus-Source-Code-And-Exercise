//
// Created by klause on 2020/7/20.
//

#include <iostream>

#define SIZE 50

struct donor {
    char name[SIZE];
    double money;
};

int main() {
    using namespace std;
    int n, count1 = 0, count2 = 0;

    cout << "Please input the number of donor: ";
    cin >> n;

    cout << "Please input everyone's name and donation amount: " << endl;
    auto *p = new donor[n];
    for (int i = 0; i < n; ++i) {
        cout << i << ". name  = ";
        cin >> p[i].name;
        cout << i << ". money = ";
        cin >> p[i].money;
    }

    cout << "Grand Patrons: " << endl;
    for (int j = 0; j < n; ++j) {
        if (p[j].money > 10000) {
            cout << p[j].name << " : $" << p[j].money << endl;
            count1++;
        }
    }
    if (count1 == 0)cout << "None" << endl;

    cout << "Patrons: " << endl;
    for (int j = 0; j < n; ++j) {
        if (p[j].money <= 10000) {
            cout << p[j].name << " : $" << p[j].money << endl;
            count2++;
        }
    }
    if (count2 == 0)cout << "None" << endl;

    return 0;
}
