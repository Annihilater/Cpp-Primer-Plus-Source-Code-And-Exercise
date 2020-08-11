//
// Created by klause on 2020/8/7.
//

#include "stack.h"
#include <iostream>

int main() {
    using namespace std;
    Item i1 = 10;
    Item i2 = 20;
    Item i3 = 30;

    Stack s1(10);
    Stack s2(s1);

    if (s1.isempty())
        cout << "S1 is empty!" << endl;
    else
        cout << "S1 is not empty!" << endl;

    if (s2.isempty())
        cout << "S2 is empty!" << endl;
    else
        cout << "S2 is not empty!" << endl;

    if (s1.isfull())
        cout << "S1 is full!" << endl;
    else
        cout << "S1 is not full!" << endl;

    if (s2.isfull())
        cout << "S2 is full!" << endl;
    else
        cout << "S2 is not full!" << endl;

    if (s1.push(i1))
        cout << "push i1 ok" << endl;
    else
        cout << "push i1 failed" << endl;
    s1.show();
    if (s1.push(i2))
        cout << "push i2 ok" << endl;
    else
        cout << "push i2 failed" << endl;
    s1.show();
    if (s1.push(i3))
        cout << "push i3 ok" << endl;
    else
        cout << "push i3 failed" << endl;
    s1.show();

    s2 = s1;
    cout << "s2 = s1, s2 : ";
    s2.show();

    if (s1.pop(i3))
        cout << "pop i3 ok" << endl;
    else
        cout << "pop i3 failed" << endl;
    s1.show();
    if (s1.pop(i2))
        cout << "pop i2 ok" << endl;
    else
        cout << "pop i2 failed" << endl;
    s1.show();
    if (s1.pop(i1))
        cout << "pop i1 ok" << endl;
    else
        cout << "pop i1 failed" << endl;
    return 0;
}
