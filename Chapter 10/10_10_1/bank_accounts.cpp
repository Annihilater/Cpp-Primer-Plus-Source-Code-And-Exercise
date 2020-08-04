//
// Created by klause on 2020/7/31.
//

#include "bank_accounts.h"
#include <iostream>


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
    std::cout << "Name   : " << m_name << std::endl;
    std::cout << "Account: " << m_account << std::endl;
    std::cout << "Money  : " << m_money << std::endl;
}
