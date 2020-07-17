//
// Created by klause on 2020/7/17.
//

#include <iostream>
#include <string>

int main() {
    using namespace std;
    string name;
    string dessert;

    cout << "Enter your name:\n";
    cin.getline((char *) name.c_str(), 20);
    cout << "Enter your favorite dessert:\n";
    cin.getline((char *) dessert.c_str(), 20);

    cout << "I have some delicious " << dessert.c_str();
    cout << " for you, " << name.c_str() << ".\n";
    return 0;
}
