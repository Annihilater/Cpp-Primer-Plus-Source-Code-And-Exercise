//
// Created by klause on 2020/8/5.
//

#include <iostream>
#include "stonewt.h"

int main() {
    using namespace std;
    Stonewt s1(100);
    Stonewt s2(200.6);
    Stonewt s3(300.9);
    Stonewt s4;
    Stonewt s5;

    s1.set_stn_float_mode();
    s2.set_stn_int_mode();
    cout << s1;
    cout << s2;
    cout << s3;

    s4 = s1 + s2;
    s4.set_stn_float_mode();
    cout << s4;

    s5 = s2 - s1;
    s5.set_stn_float_mode();
    cout << s5;

    cout << s1 * 2.2;
    cout << 2.2 * s1;
    return 0;
}
