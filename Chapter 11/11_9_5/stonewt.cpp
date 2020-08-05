//
// Created by klause on 2020/8/5.
//

#include "stonewt.h"
#include "../11_9_6/stonewt.h"

#include <iostream>

using std::cout;
using std::endl;

Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    status = 0;
}

Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    status = 0;
}

Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
    status = 0;
}

Stonewt::~Stonewt() {

}

void Stonewt::show_lbs() const {
    cout << stone << " stone, " << pds_left << " pounds" << endl;
}

void Stonewt::show_stn() const {
    cout << pounds << " pounds" << endl;
}

std::ostream &operator<<(std::ostream &os, const Stonewt &s) {
    //0 表示英石格式
    //1 表示整数磅格式
    //2 表示浮点磅格式
    if (s.status == 0)
        os << s.stone << " stone, " << s.pds_left << " pounds\n";
    else if (s.status == 1)
        os << int(s.pounds) << " pounds\n";
    else if (s.status == 2)
        os << s.pounds << " pounds\n";
    else
        os << "Stonewt object status is invalid";
    return os;
}

void Stonewt::set_lbs_mode() {
    //英石格式
    status = 0;
}

void Stonewt::set_stn_int_mode() {
    //整数磅格式
    status = 1;
}

void Stonewt::set_stn_float_mode() {
    //浮点磅格式
    status = 2;
}

Stonewt Stonewt::operator+(Stonewt &s) const {
//    Stonewt sum;
////    sum.pounds = pounds + s.pounds;
//    sum.status = 0;
//    sum.stone = sum.pounds / Lbs_per_stn;
//    sum.pds_left = int(sum.pounds) % Lbs_per_stn + sum.pounds - int(sum.pounds);

    //构造函数写法
    Stonewt sum = Stonewt(pounds + s.pounds);
    return sum;
}

Stonewt Stonewt::operator-(Stonewt &s) const {
//    Stonewt diff;
//    diff.status = 0;
//    diff.pounds = pounds - s.pounds;
//    diff.stone = diff.pounds / Lbs_per_stn;
//    diff.pds_left = int(diff.pounds) % Lbs_per_stn + diff.pounds - int(diff.pounds);

    if (pounds >= s.pounds) {
        //构造函数写法
        Stonewt diff = Stonewt(pounds - s.pounds);
        return diff;
    } else
        cout << "Error!";
    return Stonewt();
}

Stonewt Stonewt::operator*(double n) const {
    //构造函数写法
    Stonewt result = Stonewt(pounds * n);
    return result;
}
