//
// Created by klause on 2020/8/5.
//

#ifndef CPP_PRIMER_PLUS_STONEWT_H
#define CPP_PRIMER_PLUS_STONEWT_H

#include <iostream>

class Stonewt {
private:
    enum {
        Lbs_per_stn = 14
    };
    int stone;
    double pds_left;
    double pounds;
    int status;
    //0 表示英石格式
    //1 表示整数磅格式
    //2 表示浮点磅格式
public:
    Stonewt(double lbs);

    Stonewt(int stn, double lbs);

    Stonewt();

    ~Stonewt();

    void set_lbs_mode();

    void set_stn_int_mode();

    void set_stn_float_mode();

    void show_lbs() const;

    void show_stn() const;

    Stonewt operator+(Stonewt &s) const;

    Stonewt operator-(Stonewt &s) const;

    Stonewt operator*(double n) const;

    friend Stonewt operator*(double n, Stonewt &s) { return s * n; }

    friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
};

#endif //CPP_PRIMER_PLUS_STONEWT_H
