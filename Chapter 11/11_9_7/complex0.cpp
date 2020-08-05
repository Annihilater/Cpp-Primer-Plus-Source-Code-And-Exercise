//
// Created by klause on 2020/8/5.
//

#include "complex0.h"
#include <iostream>

complex::complex() {
    real = 0;
    imaginary = 0;
}

complex::complex(double m, double n) {
    real = m;
    imaginary = n;
}

complex complex::operator+(const complex &c) const {
    complex sum = complex(real + c.real, imaginary + c.imaginary);
    return sum;
}

complex complex::operator-(const complex &c) const {
    complex diff = complex(real - c.real, imaginary - c.imaginary);
    return diff;
}

complex complex::operator*(double n) const {
    complex result = complex(real * n, imaginary * n);
    return result;
}

complex complex::operator*(const complex &c) const {
    //a = (A,Bi), c = (C,Di)
    //a*c = ( A*C-B*D , (A*D + B*C)i )
    complex result = complex(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
    return result;
}

complex complex::operator~() const {
    complex result = complex(real, -imaginary);
    return result;
}

std::ostream &operator<<(std::ostream &os, const complex &c) {
    os << "(" << c.real << "," << c.imaginary << "i)";
    return os;
}

std::istream &operator>>(std::istream &is, complex &c) {
    std::cout << "real: ";
    if (!(is >> c.real))
        return is;

    std::cout << "imaginary: ";
    if (!(is >> c.imaginary))
        return is;
    return is;

//另一种写法
//    std::cout << "real: ";
//    is >> c.real;
//    std::cout << "imaginary: ";
//    is >> c.imaginary;
//    return is;
}


