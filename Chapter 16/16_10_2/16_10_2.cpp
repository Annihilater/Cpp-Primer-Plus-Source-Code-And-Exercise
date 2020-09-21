//
// Created by klause on 2020/9/18.
//

#include <iostream>
#include <vector>

using namespace std;

bool is_palindrome(string &);

bool is_palindrome2(string &);

void show(string &);

void show2(string &);

void show3(string &);

void output(const char &s) { cout << s << ""; }

int main() {
    using namespace std;
    string s1{"tot"};
    string s2{"otto"};
    string s3{"hello"};
    string s4{"Madam, I'm Adam"};

    cout << "是否是回文字符串: " << endl;
    show(s1);
    show(s2);
    show(s3);
    show2(s3);
    show2(s4);
    show3(s3);

//    string word;
//    cout << "Please input a word: ";
//    cin >> word;
//    show2(word);


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

//通过将原字符串与反转字符串进行对比，确认原字符串是不是回文字符串
bool is_palindrome2(string &s) {
    vector<char> s2(s.length());
    vector<char> s3(s.length());

    copy(s.begin(), s.end(), s2.begin());
    copy(s.rbegin(), s.rend(), s3.begin());

    cout << "s2: ";
    for_each(s2.begin(), s2.end(), output);
    cout << endl;

    cout << "s3: ";
    for_each(s3.begin(), s3.end(), output);
    cout << endl;

    return s2 == s3;
}

//通过将原字符串与反转字符串进行对比，确认原字符串是不是回文字符串
bool is_palindrome3(string &s) {
    string s4(s.rbegin(), s.rend());//生成反转字符串
    cout << s4 << endl;
    return s == s4;
}

void show(string &s) {
    if (is_palindrome(s))
        cout << "是 " << s << endl;
    else
        cout << "否 " << s << endl;
}

void show2(string &s) {
    if (is_palindrome2(s))
        cout << "是 " << s << endl;
    else
        cout << "否 " << s << endl;
}

void show3(string &s) {
    if (is_palindrome3(s))
        cout << "是 " << s << endl;
    else
        cout << "否 " << s << endl;
}
