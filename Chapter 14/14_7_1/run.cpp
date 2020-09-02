//
// Created by klause on 2020/8/30.
//

#include <iostream>
#include "wine.h"

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Enter name of wine: ";
    char lab[50];
    cin.getline(lab, 50);
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;

    Wine holding(lab, yrs);
    holding.GetBottles();
    holding.Show();

    const int YRS = 3;
    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};
    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();
    cout << "Total bottles for " << more.Label()
         << ": " << more.sum() << endl;
    cout << "Bye\n";

    return 0;
}

//input:
//Wine: Gully Wash
//years: 4
//Year  Bottles
//42   1988
//58   1994
//122   1998
//144   2001
