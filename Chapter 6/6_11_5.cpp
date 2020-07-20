//
// Created by klause on 2020/7/20.
//

#include <iostream>

#define STAGE1 5000
#define STAGE1RATE 0

#define STAGE2 15000
#define STAGE2RATE 0.1

#define STAGE3 35000
#define STAGE3RATE 0.15

#define STAGE4RATE 0.20


int main() {
    using namespace std;
    double salary, tax;

    cout << "Please input your salary: ";
    while (cin >> salary && salary > 0) {
        if (salary <= STAGE1)
            tax = salary * STAGE1RATE;
        else if (salary > STAGE1 and salary <= STAGE2)
            tax = STAGE1 * STAGE1RATE + (salary - STAGE1) * STAGE2RATE;
        else if (salary > STAGE2 and salary <= STAGE3)
            tax = STAGE1 * STAGE1RATE + (STAGE2 - STAGE1) * STAGE2RATE + (salary - STAGE2) * STAGE3RATE;
        else if (salary > STAGE3)
            tax = STAGE1 * STAGE1RATE + (STAGE2 - STAGE1) * STAGE2RATE + (STAGE3 - STAGE2) * STAGE3RATE +
                  (salary - STAGE3) * STAGE4RATE;
        cout << "Your tax is " << tax << " tvarps! " << endl;
        cout << "Please input your salary: ";
    }

    cout << "Bye!" << endl;
    return 0;
}
