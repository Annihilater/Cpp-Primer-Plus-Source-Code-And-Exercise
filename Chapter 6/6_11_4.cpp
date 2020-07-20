//
// Created by klause on 2020/7/20.
//

#include <iostream>
#include <string>

#define STRSIZE 50

using namespace std;
struct bop {
    char fullname[STRSIZE];
    char title[STRSIZE];
    char bopname[STRSIZE];
    int preference;
};

void show_menu();

void show_by_name(bop b[], int n);

void show_by_title(bop b[], int n);

void show_by_bopname(bop b[], int n);

void show_by_preference(bop b[], int n);

void show(bop b[], int n, int m);


int main() {
    char ch;
    bop bop1[3] = {
            {"fullname1", "title1", "bopname1", 2},
            {"fullname2", "title2", "bopname2", 0},
            {"fullname3", "title3", "bopname3", 1},
    };
    int is_quit = 0;

    show_menu();

    cout << "";
    while (cin.get(ch)) {
        if (ch == '\n') continue;
        switch (ch) {
            case 'a':
                show_by_name(bop1, 3);
                break;
            case 'b':
                show_by_title(bop1, 3);
                break;
            case 'c':
                show_by_bopname(bop1, 3);
                break;
            case 'd':
                show_by_preference(bop1, 3);
                break;
            case 'q':
                is_quit = 1;
                break;
            default:
                show_menu();
                break;
        }

        if (is_quit) break;
        show_menu();
    }
    cout << "Bye!" << endl;
    return 0;
}

void show_menu() {
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name         b. display by title" << endl;
    cout << "c. display by bopname      d. display by preference" << endl;
    cout << "q. quit" << endl;
}

void show_by_name(bop b[], int n) {
    struct bop tmp{};
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(b[i].fullname, b[j].fullname) > 0) {
                tmp = b[i];
                b[i] = b[j];
                b[j] = b[i];
            }
        }
    }

    show(b, n, 0);
}

void show_by_title(bop b[], int n) {
    struct bop tmp{};
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(b[i].title, b[j].title) > 0) {
                tmp = b[i];
                b[i] = b[j];
                b[j] = b[i];
            }
        }
    }
    show(b, n, 1);
}

void show_by_bopname(bop b[], int n) {
    struct bop tmp{};
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(b[i].bopname, b[j].bopname) > 0) {
                tmp = b[i];
                b[i] = b[j];
                b[j] = b[i];
            }
        }
    }
    show(b, n, 2);
}

void show_by_preference(bop b[], int n) {
    for (int i = 0; i < n; ++i) {
        if (b[i].preference == 0)
            cout << b[i].fullname << endl;
        if (b[i].preference == 1)
            cout << b[i].title << endl;
        if (b[i].preference == 2)
            cout << b[i].bopname << endl;
    }
}

void show(bop b[], int n, int m) {
    if (m == 0) {
        for (int i = 0; i < n; ++i) {
            cout << b[i].fullname << endl;
        }
    }

    if (m == 1) {
        for (int i = 0; i < n; ++i) {
            cout << b[i].title << endl;
        }
    }

    if (m == 2) {
        for (int i = 0; i < n; ++i) {
            cout << b[i].bopname << endl;
        }
    }
}
