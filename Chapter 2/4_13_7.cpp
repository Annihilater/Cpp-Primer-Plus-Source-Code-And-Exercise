//
// Created by klause on 2020/7/17.
//

#include <iostream>

struct pizza {
    char company[100];
    float diameter;
    float weight;
};

int main() {
    using namespace std;
    pizza pi{};
    cout << "Please input the company name of pizza: ";
    cin.getline(pi.company, 100);
    cout << "Please input the diameter of pizza: ";
    cin >> pi.diameter;
    cout << "Please input the weight of pizza: ";
    cin >> pi.weight;

    cout << "Your pizza: " << endl;
    cout << "company: " << pi.company << endl;
    cout << "diameter: " << pi.diameter << endl;
    cout << "weight: " << pi.weight << endl;
    return 0;
}
