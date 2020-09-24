//
// Created by klause on 2020/9/23.
//

//Program arguments:
// "/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_4/test1.txt"
// "/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_4/test2.txt"
// "/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_4/test3.txt"
// 将 test1.txt、test2.txt 文件内容复制到 test3.txt

#include <iostream>
#include <fstream>

const int SIZE = 255;

int main() {
    using namespace std;
    char line1[SIZE];
    char line2[SIZE];

    string file1{"/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_4/test1.txt"};
    string file2{"/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_4/test2.txt"};
    string file3{"/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_4/test3.txt"};

    //创建文件管理对象
    ifstream fin1(file1.c_str(), ios_base::in);
    ifstream fin2(file2.c_str(), ios_base::in);
    ofstream fout(file3.c_str(), ios_base::out);

    //打开文件
    if (!fin1.is_open()) {
        cout << "Can't open " << file1 << endl;
        exit(EXIT_FAILURE);
    }

    if (!fin2.is_open()) {
        cout << "Can't open " << file2 << endl;
        exit(EXIT_FAILURE);
    }

    if (!fout.is_open()) {
        cout << "Can't open " << file3 << endl;
        exit(EXIT_FAILURE);
    }

    //读取并合并文件内容
    fin1.getline(line1, SIZE);
    fin2.getline(line2, SIZE);
    while (!fin1.eof() or !fin2.eof()) {
        fout << line1 << " " << line2 << endl;
        fin1.getline(line1, SIZE);
        fin2.getline(line2, SIZE);
    }

    //关闭文件
    fin1.clear();
    fin1.close();
    fin2.clear();
    fin2.close();
    fout.clear();
    fout.close();
    return 0;
}
