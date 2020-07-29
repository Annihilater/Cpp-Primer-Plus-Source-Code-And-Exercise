//
// Created by klause on 2020/7/29.
//

#include <iostream>

using namespace std;

void func(char *str, int n);

int main() {
    char str[40] = "Hello good morning!";
    int n = 5;
    func(str, n);
    return 0;
}

void func(char *str, int n = 1) {
    if (n > 0) {
        if (n == 1)
            cout << str << endl;
        else
            for (int i = 0; i < n; ++i)
                func(str, 1);
    }
}
