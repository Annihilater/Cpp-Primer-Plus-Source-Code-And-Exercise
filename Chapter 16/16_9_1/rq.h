//
// Created by klause on 2020/9/17.
//

#ifndef CPP_PRIMER_PLUS_RQ_H
#define CPP_PRIMER_PLUS_RQ_H

#include <string>

using namespace std;

class RQ1 {
private:
    char *st;
public:
    RQ1() { st = new char[1], strcpy(st, ""); }

    RQ1(const char *s) {
        st = new char[strlen(s) + 1];
        strcpy(st, s);
    }

    RQ1(const RQ1 &rq) {
        st = new char[strlen(rq.st) + 1];
        strcpy(st, rq.st);
    }

    ~RQ1() { delete[]st; }

    RQ1 &operator=(const RQ1 &rq);
};

class RQ2 {
private:
    string st;  //从 c 字符串转变为 string 对象之后不需要显式复制构造函数、析构函数和赋值运算符，因为 string 对象具有内存管理功能
public:
    RQ2() : st("") {}

    RQ2(const char *s) : st(s) {
    }
};

#endif //CPP_PRIMER_PLUS_RQ_H
