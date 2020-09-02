//
// Created by klause on 2020/9/2.
//

#include "emp.h"

#include <utility>

abstr_emp::abstr_emp() {
    fname = "none";
    lname = "none";
    job = "none";
}

abstr_emp::abstr_emp(string fn, string ln, string j)
        : fname(std::move(fn)), lname(std::move(ln)), job(std::move(j)) {}

void abstr_emp::ShowAll() const {
    cout << "fname: " << fname << endl;
    cout << "lname: " << lname << endl;
    cout << "job  : " << job << endl;
}

void abstr_emp::SetAll() {
    cout << "Please input fname: ";
    cin >> fname;
    cout << "Please input lname: ";
    cin >> lname;
    cout << "Please input job: ";
    cin >> job;
}

ostream &operator<<(ostream &os, const abstr_emp &e) {
    os << e.lname << " " << e.fname << " " << e.job << endl;
    return os;
}

abstr_emp::~abstr_emp() = default;

employee::employee() = default;

employee::employee(const string &fn, const string &ln, const string &j)
        : abstr_emp(fn, ln, j) {}

void employee::ShowAll() const {
    abstr_emp::ShowAll();
}

void employee::SetAll() {
    abstr_emp::SetAll();
}

manager::manager() {
    inchargeof = 0;
}

manager::manager(const string &fn, const string &ln, const string &j, int ico)
        : abstr_emp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_emp &e, int ico)
        : abstr_emp(e), inchargeof(ico) {}

manager::manager(const manager &m)
        : abstr_emp((abstr_emp &) m), inchargeof(m.inchargeof) {}

void manager::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "ico: " << inchargeof << endl;
}

void manager::SetAll() {
    abstr_emp::SetAll();
    cout << "Please input ico: ";
    cin >> inchargeof;
}

fink::fink() {
    reportsto = "none";
}

fink::fink(const string &fn, const string &ln, const string &j, const string &rpo)
        : abstr_emp(fn, ln, j) {
    reportsto = rpo;
}

fink::fink(const abstr_emp &e, const string &rpo)
        : abstr_emp(e) {
    reportsto = rpo;
}

fink::fink(const fink &f)
        : abstr_emp((abstr_emp &) f) {
    reportsto = f.reportsto;
}

void fink::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "rpo: " << reportsto << endl;
}

void fink::SetAll() {
    abstr_emp::SetAll();
    cout << "Please input rpo: ";
    cin >> reportsto;
}

highfink::highfink() = default;

highfink::highfink(const string &fn, const string &ln, const string &j, const string &rpo, int ico)
        : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp &e, const string &rpo, int ico)
        : abstr_emp(e), manager(e, ico), fink(e, rpo) {}

highfink::highfink(const fink &f, int ico)
        : abstr_emp((abstr_emp &) f), manager((abstr_emp &) f, ico), fink(f) {}

highfink::highfink(const manager &m, const string &rpo)
        : abstr_emp((abstr_emp &) m), manager(m), fink((abstr_emp &) m, rpo) {}

highfink::highfink(const highfink &h)
        : abstr_emp((abstr_emp &) h), manager((manager &) h), fink((fink &) h) {}

void highfink::ShowAll() const {
    manager::ShowAll();
    fink::ShowAll();
}

void highfink::SetAll() {
    manager::SetAll();
    fink::SetAll();
}
