//
// Created by klause on 2020/9/24.
//

#include "cpmv.h"
#include <fstream>
#include <utility>

Cpmv::Cpmv() {
    cout << "执行默认构造函数" << endl;
    pi = new Info;
    pi->qcode = "none";
    pi->zcode = "none";
}

Cpmv::Cpmv(std::string q, std::string z) {
    cout << "执行构造函数" << endl;
    pi = new Info;
    pi->qcode = std::move(q);
    pi->zcode = std::move(z);
}

Cpmv::Cpmv(const Cpmv &cp) {
    cout << "执行复制构造函数" << endl;
    pi = new Info;
    *pi = *(cp.pi);
}

Cpmv::Cpmv(Cpmv &&mv) noexcept {
    cout << "执行移动复制构造函数" << endl;
    delete pi;
    pi = mv.pi;
    mv.pi = nullptr;
}

Cpmv::~Cpmv() {
    cout << "执行析构函数" << endl;
    delete pi;
};

Cpmv &Cpmv::operator=(const Cpmv &cp) {
    cout << "执行赋值运算符" << endl;
    if (&cp == this)
        return *this;
    delete pi;
    pi = new Info;
    *pi = *(cp.pi);
    return *this;
}

Cpmv &Cpmv::operator=(Cpmv &&mv) noexcept {
    cout << "执行移动赋值运算符" << endl;
    delete pi;
    pi = new Info;
    pi->qcode = mv.pi->qcode;
    pi->zcode = mv.pi->zcode;
    return *this;
}

Cpmv Cpmv::operator+(const Cpmv &obj) const {
    cout << "执行加法运算符" << endl;
    Cpmv temp;
    temp.pi->qcode = this->pi->qcode + obj.pi->qcode;
    temp.pi->zcode = this->pi->zcode + obj.pi->zcode;
    return temp;
}

void Cpmv::Display() const {
    cout << "qcode: " << setw(15) << pi->qcode << " , " << "zcode: " << setw(15) << pi->zcode << endl;
}
