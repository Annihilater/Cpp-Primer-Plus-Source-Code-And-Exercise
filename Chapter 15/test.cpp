//
// Created by klause on 2020/9/4.
//

#include <iostream>

int main() {
    using namespace std;

    struct dat {
        short a;
        short b;
    };
    long value = 0xA224B118;
    dat *pd = reinterpret_cast<dat *>(&value);
    cout << hex << pd->a << endl;   //显示前 2 位的值
    cout << hex << pd->b << endl;   //显示第三、四位的值
    cout << "size of long " << sizeof(long) << endl;
    cout << "size of short " << sizeof(short) << endl;

    return 0;
}
