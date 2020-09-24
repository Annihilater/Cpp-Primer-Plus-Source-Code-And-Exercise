//
// Created by klause on 2020/9/24.
//

#include <iostream>
#include "cpmv.h"

int main() {
    using namespace std;

    cout << "测试默认构造函数: " << endl;
    Cpmv c1;
    cout << "1. ";
    c1.Display();

    cout << "测试构造函数: " << endl;
    Cpmv c2("qcode2", "zcode2");
    cout << "2. ";
    c2.Display();

    cout << "测试复制构造函数: " << endl;
    const Cpmv &p = c2;
    Cpmv c3(p);
    cout << "3. ";
    c3.Display();

    //移动复制构造函数下面的测试方法不正确，不知道怎么测试
    cout << "测试移动复制构造函数: " << endl;
    Cpmv c4(c1 + c2);
    cout << "4. ";
    c4.Display();

    cout << "测试赋值运算符: " << endl;
    Cpmv c5;
    c5 = c2;
    cout << "5. ";
    c5.Display();

    cout << "测试移动赋值运算符: " << endl;
    Cpmv c6;
    c6 = c1 + c2;
    cout << "6. ";
    c5.Display();

    cout << "测试加法运算符: " << endl;
    Cpmv c7;
    c7 = c1 + c2;
    cout << "7. ";
    c5.Display();

    return 0;
}
