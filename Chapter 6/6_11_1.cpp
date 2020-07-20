//
// Created by klause on 2020/7/20.
//

#include <iostream>
#include <cctype>

int main() {
    using namespace std;
    char ch;

    cout << "Please input a string: " << endl;
    while (cin.get(ch) && ch != '@') {
        if (isupper(ch))
            ch = (char) tolower(ch);
        else if (islower(ch))
            ch = (char) toupper(ch);

        if (!isdigit(ch))
            cout << ch;
    }

    cout << endl << "Bye!";
    return 0;
}
