//
// Created by klause on 2020/9/2.
//

#ifndef CPP_PRIMER_PLUS_EMP_H
#define CPP_PRIMER_PLUS_EMP_H

#include <iostream>
#include <string>

using namespace std;

class abstr_emp {
private:
    string fname;
    string lname;
    string job;
public:
    abstr_emp();

    abstr_emp(string fn, string ln, string j);

    virtual void ShowAll() const;

    virtual void SetAll();

    friend ostream &operator<<(ostream &os, const abstr_emp &e);

    virtual ~abstr_emp() = 0;//当类中包含纯虚函数时，则不能创建该类的对象
//    virtual ~abstr_emp();
};

class employee : public abstr_emp {
public:
    employee();

    employee(const string &fn, const string &ln, const string &j);

    void ShowAll() const override;

    void SetAll() override;
};

class manager : virtual public abstr_emp {
private:
    int inchargeof{};
protected:
    int InChargeOf() const { return inchargeof; }

    int &InChargeOf() { return inchargeof; }

public:
    manager();

    manager(const string &fn, const string &ln, const string &j, int ico = 0);

    manager(const abstr_emp &e, int ico);

    manager(const manager &m);

    void ShowAll() const override;

    void SetAll() override;
};

class fink : virtual public abstr_emp {
private:
    string reportsto;
protected:
    string ReportsTo() const { return reportsto; }

    string &ReportsTo() { return reportsto; }

public:
    fink();

    fink(const string &fn, const string &ln, const string &j, const string &rpo);

    fink(const abstr_emp &e, const string &rpo);

    fink(const fink &f);

    void ShowAll() const override;

    void SetAll() override;
};

class highfink : public manager, public fink {
public:
    highfink();

    highfink(const string &fn, const string &ln, const string &j, const string &rpo, int ico);

    highfink(const abstr_emp &e, const string &rpo, int ico);

    highfink(const fink &f, int ico);

    highfink(const manager &m, const string &rpo);

    highfink(const highfink &h);

    void ShowAll() const override;

    void SetAll() override;
};


#endif //CPP_PRIMER_PLUS_EMP_H
