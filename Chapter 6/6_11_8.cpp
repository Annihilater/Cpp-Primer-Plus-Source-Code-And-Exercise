//
// Created by klause on 2020/7/20.
//
#include <iostream>
#include <fstream>

int main() {
    using namespace std;
    ifstream inFile;
    char ch;
    int count = 0;

    inFile.open("/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 6/6_11_8.txt");
    if (!inFile.is_open())
        cout << "File open failed!" << endl;
    else {
        cout << "File open successful!" << endl;
        while ((ch = inFile.get()) and ch != EOF) {
            cout << ch;
            count++;
        }

        cout << "The file contains " << count << " chars." << endl;
        inFile.close();
    }
    return 0;
}
