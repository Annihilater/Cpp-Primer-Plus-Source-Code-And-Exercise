//
// Created by klause on 2020/7/17.
//

#include <iostream>
#include <string>


struct fish {
    char type[100];
    int weight;
    float length;
};

int main() {
    using namespace std;
    fish *p;

    p = new fish;
    *p = {"cyprinoid", 5, 7.0};

    cout << "fish   type: " << (*p).type << "\n";
    cout << "fish weight: " << (*p).weight << "\n";
    cout << "fish length: " << (*p).length << "\n";

    return 0;
}
