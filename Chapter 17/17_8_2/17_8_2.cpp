//
// Created by klause on 2020/9/22.
//

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    using namespace std;
    char ch;

    if (argc == 1) {
        cerr << "Usage: " << argv[0] << " filename[s]" << endl;
        exit(EXIT_FAILURE);
    }

    fstream finout;
    finout.open(argv[1], ios_base::in | ios_base::out);//读写模式，这种方法打开文件必须要求文件存在，否则打开失败

    if (!finout.is_open()) {
        cout << "Open file fail!" << endl;
        cout << "argv[1]: " << argv[1] << endl;
        exit(EXIT_FAILURE);
    } else {
        cout << "File is open!" << endl;
        cout << "Please enter your words: ";
        cin.get(ch);
        while (cin.good() and ch != '#') {
            finout << ch;
            cin.get(ch);
        }
    }

    finout.clear();
    finout.close();
    return 0;
}
