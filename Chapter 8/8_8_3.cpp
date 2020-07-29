//
// Created by klause on 2020/7/29.
//

#include <iostream>
#include <string>

using namespace std;
#define SIZE 100

void to_upper(string &str);

int main() {
    char tmp[SIZE];
    string str;

    cout << "Enter a string (q to quit): ";
    while (true) {
        cin.getline(tmp, SIZE);
        if (!strcmp(tmp, "q"))
            break;
        str = tmp;
        to_upper(str);
        cout << str << endl;
        cout << "Next string (q to quit):";
    }
    cout << "Bye.";
    return 0;
}

void to_upper(string &str) {
    for (char &i : str) {
        if (islower(i))
            i = (char) toupper(i);
    }
}
