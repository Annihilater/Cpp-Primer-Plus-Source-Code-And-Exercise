//
// Created by klause on 2020/8/5.
//

#ifndef CPP_PRIMER_PLUS_VECTOR_H
#define CPP_PRIMER_PLUS_VECTOR_H

#include <iostream>


namespace VECTOR {
    class Vector {
    public:
        enum Mode {
            RECT, POL
        };

    private:
        double x;
        double y;
        Mode mode;

        void set_x(double n1, double n2);

        void set_y(double n1, double n2);

    public:
        Vector();

        Vector(double n1, double n2, Mode form = RECT);

        void reset(double n1, double n2, Mode form = RECT);

        ~Vector();

        double xval() const { return x; }

        double yval() const { return y; }

        double magval();

        double angval();

        void polar_mode();

        void rect_mode();

        Vector operator+(const Vector &b) const;

        Vector operator-(const Vector &b) const;

        Vector operator-() const;

        Vector operator*(double n) const;

        //friends
        friend Vector operator*(double n, const Vector &a);

        friend std::ostream &operator<<(std::ostream &os, Vector &v);

    };

}

#endif //CPP_PRIMER_PLUS_VECTOR_H
