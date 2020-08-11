//
// Created by klause on 2020/8/1

#include <iostream>

//位字段结构
struct test {
    unsigned int name1: 12;
    unsigned int name2: 4;
};

int main() {
    using namespace std;
    test t1 = {1024, 0};

    cout << t1.name1 << endl;
    cout << t1.name2 << endl;
    return 0;
}
