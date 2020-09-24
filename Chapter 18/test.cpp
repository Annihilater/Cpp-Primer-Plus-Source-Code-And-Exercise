//
// Created by klause on 2020/9/24.
//

//右值引用
#include <iostream>
#include <cmath>
#include <fstream>

int main() {
    using namespace std;
    int x = 10;
    int y = 23;
    int &&r1 = 13;      //右值引用
    int &&r2 = x + y;   //右值引用
    double &&r3 = sqrt(2.0);

    cout << "r1 : " << setw(10) << r1 << ", " << setw(20) << &r1 << endl;
    cout << "r2 : " << setw(10) << r2 << ", " << setw(20) << &r2 << endl;
    cout << "r3 : " << setw(10) << r3 << ", " << setw(20) << &r3 << endl;

    cout << "change x, y " << endl;
    x = 55;
    y = 99;

    r2 = x + y;
    cout << "r1 : " << setw(10) << r1 << ", " << setw(20) << &r1 << endl;
    cout << "r2 : " << setw(10) << r2 << ", " << setw(20) << &r2 << endl;
    cout << "r3 : " << setw(10) << r3 << ", " << setw(20) << &r3 << endl;
    return 0;
}
