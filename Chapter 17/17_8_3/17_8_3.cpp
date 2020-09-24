//
// Created by klause on 2020/9/23.
//

//Program arguments:
// "/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_3/test1.txt"
// "/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_3/test2.txt"

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    using namespace std;

    char ch;

    if (argc == 1) {
        cerr << "Usage: " << argv[0] << " filename[s]" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "xxx argv[1]: " << argv[1] << endl;
    cout << "xxx argv[2]: " << argv[2] << endl;

    //创建输入文件管理对象
    ifstream fin(argv[1], ios_base::in);
    //打开输入文件
    if (!fin.is_open()) {
        cout << "Open file1 fail!" << endl;
        cout << "argv[1]: " << argv[1] << endl;
        exit(EXIT_FAILURE);
    }

    //创建输出文件管理对象
    ofstream fout(argv[2], ios_base::out);
    //打开输出文件
    if (!fout.is_open()) {
        cout << "Open file2 fail!" << endl;
        cout << "argv[2]: " << argv[2] << endl;
        exit(EXIT_FAILURE);
    }

    //从输入文件读取文件内容，并写入到输出文件
    cout << "Start copying ..." << endl;
    while (fin.get(ch) and !fin.eof())
        fout << ch;
    cout << "Copy finished!" << endl;

    //关闭文件
    fin.clear();
    fin.close();
    fout.clear();
    fout.close();

    cout << "Done!" << endl;
    return 0;
}
