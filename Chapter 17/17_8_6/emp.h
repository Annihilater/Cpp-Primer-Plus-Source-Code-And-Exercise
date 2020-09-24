//
// Created by klause on 2020/9/23.
//

#ifndef CPP_PRIMER_PLUS_EMP_H
#define CPP_PRIMER_PLUS_EMP_H

#include <iostream>
#include <fstream>
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

    virtual void WriteAll(ofstream &fout);

    virtual void WriteClassType(ofstream &fout);

    virtual void ReadAll(ifstream &fin);

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

    void WriteAll(ofstream &fout) override;

    void WriteClassType(ofstream &fout) override;

    void ReadAll(ifstream &fin) override;
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

    void ShowInchargeof() const;

    void SetAll() override;

    void SetInchargeof();

    void WriteAll(ofstream &fout) override;

    void WriteClassType(ofstream &fout) override;

    void WriteInchargeof(ofstream &fout) const;

    void ReadAll(ifstream &fin) override;

    void ReadInchargeof(ifstream &fin);
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

    void ShowReportsto() const;

    void SetAll() override;

    void SetReportsto();

    void WriteAll(ofstream &fout) override;

    void WriteClassType(ofstream &fout) override;

    void WriteReportsto(ofstream &fout);

    void ReadAll(ifstream &fin) override;

    void ReadReportsto(ifstream &fin);
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

    void WriteAll(ofstream &fout) override;

    void WriteClassType(ofstream &fout) override;

    void ReadAll(ifstream &fin) override;
};

#endif //CPP_PRIMER_PLUS_EMP_H
