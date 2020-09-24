//
// Created by klause on 2020/9/22.
//

#include <iostream>
#include <fstream>

const int SIZE = 20;

int main() {
    using namespace std;
    char name[SIZE];
    float wages;
    float hours;

    cout << "Enter your name: ";
    cin.getline(name, SIZE);// Billy Gruff
    cout << "Enter your hourly wages: ";
    cin >> wages;// 12
    cout << "Enter number of hours worked: ";
    cin >> hours;// 7.5

    cout << "First format: " << endl;
    cout << right << showpoint;
    cout << setw(30) << name << ": $";
    cout << setw(10) << setprecision(4) << wages << ":";
    cout << setw(10) << setprecision(2) << hours << endl;

    cout << "Second format: " << endl;
    cout << left;
    cout << setw(30) << name << ": $";
    cout << setw(10) << setprecision(4) << wages << ":";
    cout << setw(10) << setprecision(2) << hours << endl;
    return 0;
}
