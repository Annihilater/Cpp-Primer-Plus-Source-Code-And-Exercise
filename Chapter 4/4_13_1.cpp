//
// Created by klause on 2020/7/17.
//

#include <iostream>

int main() {
    using namespace std;
    const int Size{50};

    char first_name[Size];
    string last_name;
    char grade;
    int age;

    cout << "what is your first name? ";
    cin.getline(first_name, Size - 1);//Betty Sue

    cout << "What is your last_name? ";//Yewe
    cin >> last_name;

    cout << "What letter grade do you deserve? ";//B
    cin >> grade;

    cout << "What is your age? ";//22
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << (char) (grade + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}
