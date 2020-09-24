//
// Created by klause on 2020/9/21.
#include <iostream>

int main() {
    using namespace std;
    long val = 560031841;
    cout.write((char *) &val, sizeof(long));//输出显示为乱码
    return 0;
}
