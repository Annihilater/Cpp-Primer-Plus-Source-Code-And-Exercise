//
// Created by klause on 2020/8/5.
//

#ifndef CPP_PRIMER_PLUS_COMPLEX0_H
#define CPP_PRIMER_PLUS_COMPLEX0_H

#include <iostream>

class complex {
private:
    double real;
    double imaginary;
public:
    complex();

    complex(double m, double n);

    complex operator+(const complex &c) const;

    complex operator-(const complex &c) const;

    complex operator*(double n) const;

    complex operator*(const complex &c) const;

    complex operator~() const;

    friend complex operator*(double n, const complex &c) { return c * n; }

    friend std::ostream &operator<<(std::ostream &os, const complex &c);

    friend std::istream &operator>>(std::istream &os, complex &c);
};

#endif //CPP_PRIMER_PLUS_COMPLEX0_H
