//
// Created by klause on 2020/9/18.
//

#include <iostream>

using namespace std;

bool is_palindrome(string &);

void show(string &);

int main() {
    using namespace std;
    bool is_again;
    string s1{"tot"};
    string s2{"otto"};
    string s3{"hello"};

    show(s1);
    show(s2);
    show(s3);

    string word;
    cout << "Please input a word: ";
    while (true) {
        cin >> word;
        is_again = false;
        for (char i : word) {
            cout << i << endl;
            if (isupper(i) || ispunct(i)) {
                is_again = true;
            }
        }
        if (is_again) {
            cout << "Word is invalid. Please input again: " << endl;
            continue;
        } else
            break;
    }
    show(word);

    return 0;
}

bool is_palindrome(string &s) {
    unsigned n = s.length() / 2;
    for (int i = 0; i < n; ++i) {
        if (s[i] != s[s.length() - i - 1])
            return false;
    }
    return true;
}

void show(string &s) {
    if (is_palindrome(s))
        cout << "是 " << s << endl;
    else
        cout << "否 " << s << endl;
}
