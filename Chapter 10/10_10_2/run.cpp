//
// Created by klause on 2020/7/31.
//

#include <iostream>
#include "person.h"

int main() {
    using namespace std;
    string lname1 = "Bob";
    string lname2 = "Alice";
    char fname1[] = "Clarissa";
    char fname2[] = "Margaret";

    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    one.show();
    cout << endl;
    one.FormalShow();

    two.show();
    cout << endl;
    two.FormalShow();

    three.show();
    cout << endl;
    three.FormalShow();
    return 0;
}
