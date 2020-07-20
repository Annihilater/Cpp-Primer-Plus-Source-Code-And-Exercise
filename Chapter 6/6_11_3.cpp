//
// Created by klause on 2020/7/20.
//

#include <iostream>

void show_menu();

int main() {
    using namespace std;
    char ch;

    show_menu();

    while (cin.get(ch)) {
        if (ch == '\n') continue;
        switch (ch) {
            case 'c':
                cout << "You choice C!" << endl;
                show_menu();
                break;
            case 'p':
                cout << "You choice P!" << endl;
                show_menu();
                break;
            case 't':
                cout << "A maple is a tree." << endl;
                show_menu();
                break;
            case 'g':
                cout << "You choice G!" << endl;
                show_menu();
                break;
            default:
                cout << "Please enter a c, p, t, or g: ";
                break;
        }
    }

    return 0;
}

void show_menu() {
    using namespace std;

    cout << "Please enter one of following choices: " << endl;
    cout << "c) carnivore       p) pianist" << endl;
    cout << "t) tree            g) game" << endl;
}
