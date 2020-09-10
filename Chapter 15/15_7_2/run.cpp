//
// Created by klause on 2020/9/4.
//

#include <iostream>

using namespace std;

//两个类的前向声明
class a;

class b;

//两个类定义: 只包含成员函数的申明
class a {
public:
    static void func1(b &);

    static void func2(b &);
};

class b {
public:
    static void func3(a &);

    static void func4(a &);
};

void a::func1(b &) {
    cout << "Class a :: func1" << endl;
}

void a::func2(b &) {
    cout << "Class a :: func2" << endl;
}

void b::func3(a &) {
    cout << "Class b :: func3" << endl;
}

void b::func4(a &) {
    cout << "Class b :: func4" << endl;
}

int main() {
    a a1;
    b b1;

    a1.func1(b1);
    a1.func2(b1);
    b1.func3(a1);
    b1.func4(a1);
    return 0;
}
