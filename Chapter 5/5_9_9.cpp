//
// Created by klause on 2020/7/17.
//

#include <iostream>
#include <string>

int main() {
    using namespace std;
    int count = 0;
    string word;

    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> word;
    while (word != "done") {
        count++;
        cin >> word;
    }

    cout << "You entered a total " << count << " words" << endl;
    return 0;
}
