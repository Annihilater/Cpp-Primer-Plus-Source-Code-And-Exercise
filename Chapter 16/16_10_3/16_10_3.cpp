//
// Created by klause on 2020/9/18.
//

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void get_wordlist(const char *filename, vector<string> &wordlist);

int main() {
    // get wordlist
    vector<string> wordlist;
    get_wordlist("words.txt", wordlist);
    int num = wordlist.size();
    cout << num << " words in words.txt" << endl;

    srand(time(0));
    char play;
    cout << "Will you play a word game? <y/n> ";
    cin >> play;
    play = (char) tolower(play);

    while (play == 'y') {
        string target = wordlist[random() % num];
        int length = target.length();
        string attempt(length, '-');    //猜对的字母
        string badchars;                   //猜错的字母
        int guesses = 6;

        cout << "Guess my secret word. It has " << length
             << " letters, and you guess\n"
             << "one letter at a time. You get " << guesses
             << " wrong guesses.\n";
        cout << "Your word: " << attempt << endl;

        while (guesses > 0 && attempt != target) {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos) {
                cout << "You already guessed that. Try again.\n";
                continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos) {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter; // add to string
            } else {
                cout << "Good guess!\n";
                attempt[loc] = letter;
                // check if letter appears again
                loc = target.find(letter, loc + 1);
                while (loc != string::npos) {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
            cout << "Your word: " << attempt << endl;
            if (attempt != target) {
                if (badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << " bad guesses left\n";
            }
        }

        //次数用完了
        if (guesses > 0)
            cout << "That's right!\n";
        else
            cout << "Sorry, the word is " << target << ".\n";

        cout << "Will you play another? <y/n> ";
        cin >> play;
        play = (char) tolower(play);
    }

    cout << "Bye\n";
    return 0;
}

void get_wordlist(const char *filename, vector<string> &wordlist) {
    std::ifstream fin;
    fin.open(filename);
    if (!fin.is_open()) {
        std::cout << "failed to open file " << filename << std::endl;
        std::exit(EXIT_FAILURE);
    }
    string word;

    while (fin >> word)
        wordlist.push_back(word);
}
