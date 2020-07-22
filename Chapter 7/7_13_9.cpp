//
// Created by klause on 2020/7/22.
//
#include <iostream>

using namespace std;
const int SLEN = 30;

struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);

void display1(student st);

void display2(const student *ps);

void display3(const student pa[], int n);

int main() {
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;

    while (cin.get() != '\n')continue;

    auto *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);

    for (int i = 0; i < entered; ++i) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done!" << endl;

    return 0;
}

int getinfo(student pa[], int n) {
    int i;
    for (i = 0; i < n; ++i) {
        cout << "student " << i + 1 << "# fullname: ";
        cin >> pa[i].fullname;
        cout << "student " << i + 1 << "# hobby   : ";
        cin >> pa[i].hobby;
        cout << "student " << i + 1 << "# ooplevel: ";
        cin >> pa[i].ooplevel;
        if (cin.fail())break;

    }
    return i;
}

void display1(student st) {
    cout << "Using display1:" << endl;
    cout << st.fullname << endl;
    cout << st.hobby << endl;
    cout << st.ooplevel << endl;
}

void display2(const student *ps) {
    cout << "Using display2:" << endl;
    cout << ps->fullname << endl;
    cout << ps->hobby << endl;
    cout << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
    cout << "Using display3:" << endl;
    for (int i = 0; i < n; ++i) {
        display1(pa[i]);
    }
}
