//
// Created by klause on 2020/9/24.
//

#ifndef CPP_PRIMER_PLUS_CPMV_H
#define CPP_PRIMER_PLUS_CPMV_H

#include <iostream>

using namespace std;

class Cpmv {
public:
    struct Info {
        std::string qcode{};
        std::string zcode{};
    };
private:
    Info *pi{};
public:
    Cpmv();

    Cpmv(std::string q, std::string z);

    Cpmv(const Cpmv &cp);

    Cpmv(Cpmv &&mv) noexcept;

    ~Cpmv();

    Cpmv &operator=(const Cpmv &cp);

    Cpmv &operator=(Cpmv &&mv) noexcept;

    Cpmv operator+(const Cpmv &obj) const;

    void Display() const;
};

#endif //CPP_PRIMER_PLUS_CPMV_H
