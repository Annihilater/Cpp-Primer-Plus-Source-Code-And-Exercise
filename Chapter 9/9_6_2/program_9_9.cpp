//
// Created by klause on 2020/7/30.
//

//程序清单 9.9 源码

#include <iostream>
#include <string>

const int ArSize = 10;

void str_count(const char *str);

int main() {
    using namespace std;
    char input[ArSize];
    string input1;
    char next;

    cout << "Enter a line:\n";
    cin.get(input, ArSize);
    while (cin) {
        cin.get(next);
        while (next != '\n')
            cin.get(next);
        str_count(input);
        cout << "Enter next line (empty line to quit):\n";
        cin.get(input, ArSize);
    }
    cout << "Bye\n";
    return 0;
}

void str_count(const char *str) {
    using namespace std;
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    while (*str++) count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
