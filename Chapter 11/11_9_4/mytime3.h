//
// Created by klause on 2020/8/5.
//

#ifndef CPP_PRIMER_PLUS_MYTIME3_H
#define CPP_PRIMER_PLUS_MYTIME3_H

#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    Time();

    Time(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

//    Time operator+(const Time &t) const; //成员函数重载加法运算符

    friend Time operator+(const Time &t1, const Time &t2);//友元函数重载加法运算符

//    Time operator-(const Time &t) const;//成员函数重载减法运算符

    friend Time operator-(const Time &t1, const Time &t2);//友元函数重载减法运算符

//    Time operator*(double n) const;//成员函数重载乘法运算符

    friend Time operator*(const Time &t, double n);//友元函数重载乘法运算法

    friend Time operator*(double m, const Time &t) { return t * m; }//友元函数重载乘法运算符

    friend std::ostream &operator<<(std::ostream &os, const Time &t);//友元函数重载 << 运算符
};

#endif //CPP_PRIMER_PLUS_MYTIME3_H
