//
// Created by klause on 2020/8/31.
//

#include "worker.h"
#include <iostream>

using namespace std;

void Worker::Set() {
    cout << "Enter worker's ID: ";
    getline(cin, fullname);
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

void Worker::Show() const {
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << id << endl;
}
