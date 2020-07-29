//
// Created by klause on 2020/7/29.
//

#include <iostream>
#include <cstring>

using namespace std;

struct stringy {
    char *str;
    int ct;
};

void set(stringy &, char *);

void show(const stringy &, int n = 1);

void show(const char *, int n = 1);

int main() {
    stringy beany{};
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);

    cout << endl;
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");

    return 0;
}

void set(stringy &s, char *c) {
    s.str = c;
    s.ct = strlen(c);
}

void show(const stringy &beauy, int n) {
    while (n-- > 0)
        cout << beauy.str << endl;
}

void show(const char *str, int n) {
    while (n-- > 0)
        cout << str << endl;
}

//void show(const stringy &s, int n) {
//    if (n == 0)
//        cout << s.str << endl;
//    else if (n > 0)
//        for (int i = 0; i < n; ++i)
//            cout << s.str << endl;
//}
//
//void show(const char *p, int n) {
//    if (n == 0)
//        cout << p << endl;
//    else if (n > 0)
//        for (int i = 0; i < n; ++i)
//            cout << p << endl;
//}
