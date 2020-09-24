//
// Created by klause on 2020/9/22.
//

#include <iostream>

int main() {
    using namespace std;

    char ch;
    int count = 0;

    cout << "Please input words: ";
    ch = cin.get();
    while (ch != '$') {
        count++;
        ch = cin.get();
    }

    cout << "count: " << count << endl;
    cout << "Next char : " << (char) cin.peek() << endl;
    cout << "Next char : " << (char) cin.get() << endl;
    return 0;
}
