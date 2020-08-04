//
// Created by klause on 2020/7/31.
//

#ifndef CPP_PRIMER_PLUS_BANK_ACCOUNTS_H
#define CPP_PRIMER_PLUS_BANK_ACCOUNTS_H

#include <cstring>

class BankAccounts {
private:
    static const int name_size = 40;
    static const int account_size = 40;
    char m_name[name_size];
    char m_account[account_size];
    double m_money;
public:
    BankAccounts();

    BankAccounts(char *name, char *account, double money = 0);

    bool save(double money);

    bool draw(double money);

    int check() const;

    void show() const;

};

#endif //CPP_PRIMER_PLUS_BANK_ACCOUNTS_H
