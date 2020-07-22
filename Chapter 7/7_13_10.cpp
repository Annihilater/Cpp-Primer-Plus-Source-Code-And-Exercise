//
// Created by klause on 2020/7/22.
//

#include <iostream>

using namespace std;

double calculate(double x, double y, double (*f)(double, double));

double add(double x, double y);

double multiplication(double x, double y);

double subtraction(double x, double y);

void test1();

void test2();

int main() {
    int n;
    cout << "Select test 1 or test 2: ";
    cin >> n;
    if (n == 1) {
        cout << "Test 1: " << endl;
        test1();
    } else if (n == 2) {
        cout << "Test 2: " << endl;
        test2();
    } else
        cout << "Bye!" << endl;
    return 0;
}

void test1() {
    double x, y;
    double (*pf)(double, double);

    pf = add;
    cout << "Enter two numbers:(q to quit) " << endl;
    while (cin) {
        cin >> x >> y;
        cout << calculate(x, y, pf) << endl;
        cout << "Enter next two numbers:(q to quit) " << endl;
    }
}

void test2() {
    double x, y;
    double (*pf[3])(double, double) = {&add, &multiplication, &subtraction};

    cout << "Enter two numbers:(q to quit) " << endl;
    while (cin) {
        cin >> x >> y;
        if (cin.fail()) break;
        for (auto &i : pf) {
            cout << calculate(x, y, i) << endl;
        }

        cout << "Enter next two numbers:(q to quit) " << endl;
    }
}

double calculate(double x, double y, double (*f)(double, double)) {
    return f(x, y);
}

//加法
double add(double x, double y) {
    cout << x << " + " << y << " = ";
    return x + y;
}

//乘法
double multiplication(double x, double y) {
    cout << x << " * " << y << " = ";
    return x * y;
}

//减法
double subtraction(double x, double y) {
    cout << x << " - " << y << " = ";
    return x - y;
}
