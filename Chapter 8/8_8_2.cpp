//
// Created by klause on 2020/7/29.
//

#include <iostream>

using namespace std;

struct CandyBar {
    char *name;
    double weight;
    int calories;
};

void init(CandyBar &c, char *name, double weight, int calories);

void show(const CandyBar &c);

int main() {
    CandyBar c = {};
    char name[40] = "Millennium";
    init(c, name, 2.85, 350);
    show(c);
    return 0;
}

void init(CandyBar &c, char *name, double weight, int calories) {
    c.name = name;
    c.weight = weight;
    c.calories = calories;
}

void show(const CandyBar &c) {
    cout << "name: " << c.name << endl;
    cout << "weight: " << c.weight << endl;
    cout << "calories: " << c.calories << endl;
}
