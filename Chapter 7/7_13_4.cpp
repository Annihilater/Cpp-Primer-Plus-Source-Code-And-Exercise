//
// Created by klause on 2020/7/22.
//

#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main() {
    using namespace std;
    unsigned int total1, choices1, total2, choices2;
    cout << "Enter the total number of choices on the game and\n"
            "the number of picks allowed and the total number \n"
            "of especially choices on the game and the number \n"
            "of especially picks allowed:\n";

    while ((cin >> total1 >> choices1 >> total2 >> choices2) && choices1 <= total1 && choices2 <= total2) {
        cout << "You have one chance in ";
        cout << probability(total1, choices1) * probability(total2, choices2);
        cout << " of winning." << endl;
        cout << "Next two numbers (q to quit): ";
    }
    return 0;
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0, n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--) {
        result = result * n / p;
    }
    return result;
}
