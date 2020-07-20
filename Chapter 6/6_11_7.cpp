//
// Created by klause on 2020/7/20.
//

#include <iostream>

int main() {
    using namespace std;
    char ar[50] = {};
    int vowel = 0, consonant = 0, others = 0, is_quit = 0;

    cout << "Enter words (q to quit): " << endl;
    while (cin >> ar) {
        if (isalpha(ar[0])) {
            switch (ar[0]) {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    vowel++;
                    break;
                case 'q':
                    is_quit = 1;
                    break;
                default:
                    consonant++;
                    break;
            }
        } else
            others++;

        if (is_quit) break;
    }

    cout << vowel << " words beginning with vowels" << endl;
    cout << consonant << " words beginning with consonant" << endl;
    cout << others << " others" << endl;
    return 0;
}
