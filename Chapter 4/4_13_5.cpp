//
// Created by klause on 2020/7/17.
//

#include <iostream>

struct CandyBar {
    char brand[20];
    float weight;
    int calorie;
};

int main() {
    using namespace std;
    CandyBar snack{"Mocha Munch", 2.3, 350};

    cout << "snack brand : " << snack.brand << endl;
    cout << "snack weight : " << snack.weight << endl;
    cout << "snack calorie : " << snack.calorie << endl;
    return 0;
}
