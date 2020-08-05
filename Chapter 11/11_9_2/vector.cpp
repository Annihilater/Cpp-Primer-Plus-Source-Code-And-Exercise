//
// Created by klause on 2020/8/5.
//

#include "vector.h"
#include <cmath>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {
    const double Rad_to_deg = 45.0 / atan(1.0);

    double Vector::magval() {
        return std::sqrt(x * x + y * y);
    }

    double Vector::angval() {
        if (x == 0.0 && y == 0.0)
            return 0.0;
        else
            return atan2(y, x);
    }

    void VECTOR::Vector::set_x(double n1, double n2) {
        x = n1 * cos(n2 / Rad_to_deg);
    }

    void VECTOR::Vector::set_y(double n1, double n2) {
        y = n1 * sin(n2 / Rad_to_deg);
    }

    VECTOR::Vector::Vector() {
        x = y = 0.0;
        mode = RECT;
    }

    VECTOR::Vector::Vector(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
        } else if (form == POL) {
            set_x(n1, n2);
            set_y(n1, n2);
        } else {
            cout << "Incorrect 3rd argument to Vector() --";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    void VECTOR::Vector::reset(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
        } else if (form == POL) {
            set_x(n1, n2);
            set_y(n1, n2);
        } else {
            cout << "Incorrect 3rd argument to Vector() --";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    VECTOR::Vector::~Vector() {

    }

    void VECTOR::Vector::polar_mode() {
        mode = POL;
    }

    void VECTOR::Vector::rect_mode() {
        mode = RECT;
    }

    Vector VECTOR::Vector::operator+(const Vector &b) const {
        return Vector(x + b.x, y + b.y);
    }

    Vector VECTOR::Vector::operator-(const Vector &b) const {
        return Vector(x - b.x, y - b.y);

    }

    Vector VECTOR::Vector::operator-() const {
        return Vector(-x, -y);
    }

    Vector VECTOR::Vector::operator*(double n) const {
        return Vector(n * x, n * y);
    }

    Vector operator*(double n, const Vector &a) {
        return a * n;
    }

    std::ostream &operator<<(std::ostream &os, Vector &v) {
        if (v.mode == Vector::RECT)
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL)
            os << "(m,a) = (" << v.magval() << ", " << v.angval() * Rad_to_deg << ")";
        else
            os << "Vector object mode is invalid";
        return os;
    }
}
