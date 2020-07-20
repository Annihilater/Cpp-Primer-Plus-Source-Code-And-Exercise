//
// Created by klause on 2020/7/17.
//

// input:
// 2
// Hudson Hornet
// 1952
// Kaiser
// 1951

#include <iostream>
#include <string>

using namespace std;

struct car {
    string manufacturer;
    int year{};
};

int main() {
    int n;
    char manufacturer[100];
    car *p;

    cout << "How many car do you wish to catalog? ";
    cin >> n;                                      //读取输入之后会把换行符留在输入缓冲区

    p = new car[n];
    for (int i = 0; i < n; ++i) {
        cout << "Car #" << i + 1 << ": " << endl;
        cout << "Please enter the make: ";
        cin.get();                                 //清楚之前使用 cin 在输入缓冲区留下的换行符
        cin.getline(manufacturer, 100);         //因为生产商的名字可能含有空格所以不能使用 cin
        p[i].manufacturer = manufacturer;
        cout << "Please enter the year made: ";
        cin >> p[i].year;
    }

    cout << "Here is your collection: " << endl;
    for (int j = 0; j < n; ++j) {
        cout << p[j].year << " " << p[j].manufacturer << endl;
    }

    return 0;
}
