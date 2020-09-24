//
// Created by klause on 2020/9/23.
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

void abstr_emp::WriteAll(ofstream &fout) {
    fout << fname << endl;
    fout << lname << endl;
    fout << job << endl;
}

void abstr_emp::WriteClassType(ofstream &fout) {
    fout << 0 << endl;
}

void abstr_emp::ReadAll(ifstream &fin) {
    char f[255];
    char l[255];
    char j[255];
    fin.getline(f, 255);
    fin.getline(l, 255);
    fin.getline(j, 255);
    fname = string(f);
    lname = string(l);
    job = string(j);
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

void employee::WriteAll(ofstream &fout) {
    abstr_emp::WriteAll(fout);
}

void employee::ReadAll(ifstream &fin) {
    abstr_emp::ReadAll(fin);
}

void employee::WriteClassType(ofstream &fout) {
    fout << 1 << endl;
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
    ShowInchargeof();
}

void manager::ShowInchargeof() const {
    cout << "ico: " << inchargeof << endl;
}

void manager::SetAll() {
    abstr_emp::SetAll();
    SetInchargeof();
}

void manager::SetInchargeof() {
    cout << "Please input ico: ";
    cin >> inchargeof;
}

void manager::WriteAll(ofstream &fout) {
    abstr_emp::WriteAll(fout);
    WriteInchargeof(fout);
}

void manager::WriteClassType(ofstream &fout) {
    fout << 2 << endl;
}

void manager::WriteInchargeof(ofstream &fout) const {
    fout << inchargeof << endl;
}

void manager::ReadAll(ifstream &fin) {
    abstr_emp::ReadAll(fin);
    ReadInchargeof(fin);
}

void manager::ReadInchargeof(ifstream &fin) {
    fin >> inchargeof;
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
    ShowReportsto();
}

void fink::ShowReportsto() const {
    cout << "rpo: " << reportsto << endl;
}

void fink::SetAll() {
    abstr_emp::SetAll();
    SetReportsto();
}

void fink::SetReportsto() {
    cout << "Please input rpo: ";
    cin >> reportsto;
}

void fink::WriteAll(ofstream &fout) {
    abstr_emp::WriteAll(fout);
    WriteReportsto(fout);
}

void fink::WriteClassType(ofstream &fout) {
    fout << 3 << endl;
}

void fink::WriteReportsto(ofstream &fout) {
    fout << reportsto << endl;
}

void fink::ReadAll(ifstream &fin) {
    abstr_emp::ReadAll(fin);
    ReadReportsto(fin);
}

void fink::ReadReportsto(ifstream &fin) {
    char r[255];
    fin.getline(r, 255);
    reportsto = string(r);
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
    fink::ShowReportsto();
}

void highfink::SetAll() {
    manager::SetAll();
    fink::SetReportsto();
}

void highfink::WriteAll(ofstream &fout) {
    manager::WriteAll(fout);
    fink::WriteReportsto(fout);
}

void highfink::ReadAll(ifstream &fin) {
    manager::ReadAll(fin);
    if (isspace(fin.peek())) {
        fin.get();//有个换行符需要处理一下，否则后面无法正常读取
    }
    fink::ReadReportsto(fin);
}

void highfink::WriteClassType(ofstream &fout) {
    fout << 4 << endl;
}
