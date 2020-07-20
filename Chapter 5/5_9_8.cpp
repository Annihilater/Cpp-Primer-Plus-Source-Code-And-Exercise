//
// Created by klause on 2020/7/17.
//
#include <iostream>

int main() {
    using namespace std;
    int count = 0;
    char word[100];

    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> word;
    while (strcmp(word, "done") != 0) {
        count++;
        cin >> word;
    }

    cout << "You entered a total " << count << " words" << endl;
    return 0;
}
