//
// Created by klause on 2020/7/20.
//

#include <iostream>
#include <fstream>

#define SIZE 50

struct donor {
    char name[SIZE];
    double money;
};

int main() {
    using namespace std;
    ifstream inFile;
    char t;

    int n, count1 = 0, count2 = 0;

    inFile.open("/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 6/6_11_9.txt");
    if (!inFile.is_open())
        cout << "File open failed!" << endl;
    else {
        cout << "File open successful!" << endl;
        inFile >> n;
        auto *p = new donor[n];

        for (int i = 0; i < n; ++i) {

            inFile.get();//除掉换行符
            inFile.getline(p[i].name, 50);
            cout << i + 1 << " : " << p[i].name << " ";

            inFile >> p[i].money;
            cout << p[i].money << endl;
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

    }
    return 0;
}
