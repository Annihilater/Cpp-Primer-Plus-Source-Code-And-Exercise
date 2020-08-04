//
// Created by klause on 2020/7/31.
//

#include <iostream>
#include "bank_accounts.h"

int main() {
    using namespace std;
    char name1[] = "Bob";
    char name2[] = "Alice";
    char account1[] = "123456789";
    char account2[] = "234567891";
    BankAccounts a1 = BankAccounts(name1, account1, 100);
    BankAccounts a2 = {name2, account2, 200};

    a1.show();
    a1.save(100);
    a1.show();
    a1.draw(50);
    a1.show();
    cout << a1.check() << endl;

    a2.show();
    a2.save(20);
    a2.show();
    a2.draw(30);
    a2.show();
    cout << a2.check() << endl;
    return 0;
}
