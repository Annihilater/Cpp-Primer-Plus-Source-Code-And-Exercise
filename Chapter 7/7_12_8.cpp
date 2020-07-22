//
// Created by klause on 2020/7/22.
//

#include <iostream>

int replace(char *str, char c1, char c2);

int main() {
    using namespace std;
    char s[] = "hello_world";
    char c1 = 'o', c2 = 'k';
    int n;
    n = replace(s, c1, c2);
    cout << "replace times: " << n << endl;
    return 0;
}

int replace(char *str, char c1, char c2) {
    char *p = str;
    int n = 0;
    while (*p != '\0') {
        if (*p == c1) {
            *p = c2;
            n++;
        }
        p++;
    }
    return n;
}
