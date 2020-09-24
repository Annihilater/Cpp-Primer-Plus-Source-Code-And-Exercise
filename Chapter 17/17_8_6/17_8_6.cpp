//
// Created by klause on 2020/9/23.
//

#include <iostream>
#include <fstream>
#include "emp.h"

using namespace std;
const int MAX = 10;

void show_menu();

void show_data();

void add_data();

int main() {
    show_data();
    add_data();
    show_data();
    cout << "Bye!" << endl;
    return 0;
}

void show_menu() {
    cout << "Please enter your data: " << endl;
    cout << "Please enter 1~5 to select a type: " << endl;
    cout << "1.employee     2.manager" << endl;
    cout << "3.fink         4.highfink" << endl;
    cout << "5.quit" << endl;
}

void show_data() {
    //显示文件内容
    abstr_emp *pc[MAX];
    char ch;
    int classtype;
    string file{"/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_6/test.txt"};

    //打开文件
    ifstream fin(file, ios_base::in);
    if (!fin.is_open()) {
        cout << "Can't open " << file << endl;
        exit(EXIT_FAILURE);
    }
//    cout << file << " open success for fin." << endl;

    //从文件读取数据，存到数组
    int j = 0;
    while ((fin >> classtype).get(ch)) {
        switch (classtype) {
            case (1): {
                pc[j] = new employee;
                pc[j++]->ReadAll(fin);
                break;
            }
            case (2): {
                pc[j] = new manager;
                pc[j++]->ReadAll(fin);
                break;
            }
            case (3): {
                pc[j] = new fink;
                pc[j++]->ReadAll(fin);
                break;
            }
            case (4): {
                pc[j] = new highfink;
                pc[j++]->ReadAll(fin);
                break;
            }
            default:
                cout << "Invalid classtype." << endl;
                break;
        }
    }

    //显示数组数据
    for (int i = 0; i < j; ++i) {
        cout << "Data " << i + 1 << " : " << endl;
        pc[i]->ShowAll();
    }
    fin.close();
}

void add_data() {
    abstr_emp *pc[MAX];
    int classtype;
    char ch;
    bool is_quit = false;
    string file{"/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_6/test.txt"};

    //打开文件
    ofstream fout(file, ios_base::app);
    if (!fout.is_open()) {
        cout << "Can't open " << file << endl;
        exit(EXIT_FAILURE);
    }
//    cout << file << " open success for fout." << endl;

    //输入数据到数组
    int i = 0;
    show_menu();
    while ((cin >> classtype).get(ch) and i < MAX) {
        switch (classtype) {
            case (1): {
                pc[i] = new employee;
                pc[i++]->SetAll();
                break;
            }
            case (2): {
                pc[i] = new manager;
                pc[i++]->SetAll();
                break;
            }
            case (3): {
                pc[i] = new fink;
                pc[i++]->SetAll();
                break;
            }
            case (4): {
                pc[i] = new highfink;
                pc[i++]->SetAll();
                break;
            }
            case (5): {
                is_quit = true;
                break;
            }
            default:
                cout << "Invalid input, please try again." << endl;
                break;
        }
        if (is_quit) break;
        show_menu();
    }

    //将数组数据写入文件
    for (int j = 0; j < i; ++j) {
        pc[j]->WriteClassType(fout);
        pc[j]->WriteAll(fout);
    }

    fout.close();
}


/*
1
fname
lname
job
2
fname2
lname2
job2
99
3
fname3
lname3
job3
good
4
fname4
lname4
job4
88
bad
 */
