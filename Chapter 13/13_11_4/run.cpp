//
// Created by klause on 2020/8/11.
#include <iostream>
#include "port.h"

int main() {
    using namespace std;

    Port p1("brand1", "style1", 10);
    VintagePort v1("brand2", 20, "nickname1", 30);

    p1.Show();
    cout << p1;
    cout << "p1 bottle count: " << p1.BottleCount() << endl;

    v1.Show();
    cout << v1;
    cout << "v1 bottle count: " << v1.BottleCount() << endl;

    Port p2;
    p2 = p1;
    cout << "p2: " << endl;
    p1.Show();
    p2 += 10;
    p2.Show();
    p2 -= 5;
    p2.Show();


    VintagePort v2;
    v2 = v1;
    cout << "v2: " << endl;
    v2.Show();
    v2 += 20;
    v2.Show();
    v2 -= 5;
    v2.Show();

    Port p3 = Port(p1);
    cout << "p3: " << endl;
    p3.Show();

    VintagePort v3 = VintagePort(v1);
    cout << "v3: " << endl;
    v3.Show();
    return 0;
}
