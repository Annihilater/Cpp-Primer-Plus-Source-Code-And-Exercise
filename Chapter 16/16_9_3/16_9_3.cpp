//
// Created by klause on 2020/9/17.
//

#include <iostream>

using namespace std;

string &ToUpper(string &st);

int main() {
    using namespace std;

    string s1{"hello"};
    cout << ToUpper(s1);

    return 0;
}

string &ToUpper(string &st) {
    for (char &i : st) {
        if (islower(i))
            i = (char) toupper((char) i);
    }
    return st;
}
