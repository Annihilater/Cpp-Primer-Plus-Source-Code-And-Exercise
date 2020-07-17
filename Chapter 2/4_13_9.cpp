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

    auto *ar = new CandyBar[Size];

    for (int i = 0; i < Size; i++) {
        strcpy(ar[i].brand, "snack");
        ar[i].weight = 2.3;
        ar[i].calorie = 7;
    }

    for (int i = 0; i < Size; i++) {
        cout << "brand : " << ar[i].brand << endl;
        cout << "weight : " << ar[i].weight << endl;
        cout << "calorie : " << ar[i].calorie << endl;
    }
    return 0;
}
