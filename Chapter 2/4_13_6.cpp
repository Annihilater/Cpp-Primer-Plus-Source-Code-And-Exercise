//
// Created by klause on 2020/7/17.
//

#include <iostream>

using namespace std;

struct CandyBar {
    char brand[20];
    float weight;
    int calorie;
};

int main() {
    const int Size{3};
    CandyBar ar[Size];
    for (auto &i : ar) {
        strcpy(i.brand, "snack");
        i.weight = 2.3;
        i.calorie = 7;
    }

    for (auto &i:ar) {
        cout << "brand : " << i.brand << endl;
        cout << "weight : " << i.weight << endl;
        cout << "calorie : " << i.calorie << endl;
    }
    return 0;
}

