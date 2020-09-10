//
// Created by klause on 2020/9/10.
//

#ifndef CPP_PRIMER_PLUS_EXC_MEAN_H
#define CPP_PRIMER_PLUS_EXC_MEAN_H

#include <iostream>
#include <stdexcept>

using namespace std;

class bad_hmean : public logic_error {
private:
    double v1;
    double v2;
public:
    explicit bad_hmean(const string &unnamed = "hmean() invalid arguments: a = -b\n", double a = 0, double b = 0)
            : logic_error(unnamed), v1(a), v2(b) {}

    void mesg() const;

};

inline void bad_hmean::mesg() const {
    cout << "hmean(" << v1 << ", " << v2 << "): "
         << "invalid arguments: a = -b" << endl;
}


class bad_gmean : public logic_error {
public:
    double v1;
    double v2;

    explicit bad_gmean(const string &unnamed = "gmean() arguments should be >= 0\n", double a = 0, double b = 0)
            : logic_error(unnamed), v1(a), v2(b) {}

    static const char *mesg();

};

inline const char *bad_gmean::mesg() {
    return "gmean() arguments should be >= 0\n";
}

//#include <stdexcept>
//
//class HmeanExcp : public std::logic_error {
//public:
//    HmeanExcp() : std::logic_error("hmean() invalid arguments: a = -b\n") {
//    }
//};
//
//class GmeanExcp : public std::logic_error {
//public:
//    GmeanExcp() : std::logic_error("gmean() arguments should be >= 0\n") {
//    }
//};

#endif //CPP_PRIMER_PLUS_EXC_MEAN_H
