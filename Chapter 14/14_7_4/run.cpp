//
// Created by klause on 2020/9/1.
//

#include <iostream>
#include "person.h"

int main() {
    using namespace std;

    Person p1("name1", "name2");
    BadDude b1("first", "last", 9, 7);
    BadDude b2(p1, 10, 12);

    cout << "b1 card num : " << BadDude::Cdraw() << endl;
    cout << "b1 time: " << b1.Gdraw() << endl;
    b1.Show();

    cout << endl;

    cout << "b2 card num : " << BadDude::Cdraw() << endl;
    cout << "b2 time: " << b2.Gdraw() << endl;
    b2.Show();

    return 0;
}
