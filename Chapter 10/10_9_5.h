//
// Created by klause on 2020/7/31.
//

#ifndef CPP_PRIMER_PLUS_10_9_5_H
#define CPP_PRIMER_PLUS_10_9_5_H

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

BankAccounts::BankAccounts() {
    strncpy(m_name, "", 39);
    m_name[39] = '\0';
    strncpy(m_account, "", 39);
    m_account[39] = '\0';
    m_money = 0;
}

BankAccounts::BankAccounts(char *name, char *account, double money) {
    strncpy(m_name, name, 39);
    m_name[39] = '\0';
    strncpy(m_account, account, 39);
    m_account[39] = '\0';
    m_money = money;
}


bool BankAccounts::save(double money) {
    if (money > 0) {
        m_money += money;
        return true;
    } else
        return false;
}

bool BankAccounts::draw(double money) {
    if (money > 0 && m_money >= money) {
        m_money -= money;
        return true;
    } else
        return false;
}

int BankAccounts::check() const {
    return m_money;
}

void BankAccounts::show() const {

}


#endif //CPP_PRIMER_PLUS_10_9_5_H
