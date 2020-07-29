//
// Created by klause on 2020/7/23.
//


#include <iostream>

using namespace std;

const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct expenses {
    double exp[Seasons];
};


void fill(expenses &pa);

void show(expenses &da);

int main() {
    using namespace std;
    expenses ex = {};

    fill(ex);
    show(ex);
    return 0;
}

void fill(expenses &pa) {
    for (int i = 0; i < Seasons; ++i) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa.exp[i];
    }
}

void show(expenses &da) {
    double total = 0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i) {
        cout << Snames[i] << " : $" << da.exp[i] << endl;
        total += da.exp[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
