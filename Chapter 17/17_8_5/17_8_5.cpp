//
// Created by klause on 2020/9/23.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <set>

using namespace std;

const int SIZE = 255;

inline void output(string &s) { cout << s << endl; }

int main() {
    string in1{"/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_5/mat.dat"};
    string in2{"/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_5/pat.dat"};
    string out{"/Users/klause/Documents/CLionProjects/Cpp Primer Plus/Chapter 17/17_8_5/matnpat.dat"};

    //创建文件管理对象
    ifstream fin1(in1, ios_base::in);
    ifstream fin2(in2, ios_base::in);
    ofstream fout(out, ios_base::out);

    //打开文件
    if (!fin1.is_open()) {
        cout << "Can't open " << in1 << endl;
        exit(EXIT_FAILURE);
    }

    if (!fin2.is_open()) {
        cout << "Can't open " << in2 << endl;
        exit(EXIT_FAILURE);
    }

    if (!fout.is_open()) {
        cout << "Can't open " << out << endl;
        exit(EXIT_FAILURE);
    }

    cout << "File is opening!" << endl;
    vector<string> mat_friends, pat_friends;
    char temp[SIZE];

    //从文件读取 mat's friends 存进 vector
    while (fin1.getline(temp, SIZE) and !fin1.eof()) {
        string s1(temp);
        mat_friends.push_back(s1);
    }

    //从文件读取 pat's friends 存进 vector
    while (fin2.getline(temp, SIZE) and !fin2.eof()) {
        string s2(temp);
        pat_friends.push_back(s2);
    }

    //显示 mat's friends
    cout << "Mat's Friends: " << endl;
    for_each(mat_friends.begin(), mat_friends.end(), output);
    cout << endl;

    //显示 pat's friends
    cout << "Pat's Friends: " << endl;
    for_each(pat_friends.begin(), pat_friends.end(), output);
    cout << endl;

    //合并
    vector<string> all_friends;
    all_friends.reserve(mat_friends.size() + pat_friends.size());//预留内存空间
    all_friends.insert(all_friends.end(), mat_friends.begin(), mat_friends.end());//插入 mat's friends
    all_friends.insert(all_friends.end(), pat_friends.begin(), pat_friends.end());//插入 pat's friends

    sort(all_friends.begin(), all_friends.end());                   //排序
    auto new_end = unique(all_friends.begin(), all_friends.end());  //去除连续重复

    cout << "All friends: " << endl;                                //显示合并去重后的名单
    for_each(all_friends.begin(), all_friends.end(), output);

    for (auto i = all_friends.begin(); i < new_end; ++i) {          //将连续去重后的名单写入文件
        fout << *i << endl;
    }
    cout << endl;

    //关闭文件
    fin1.clear();
    fin1.close();
    fin2.clear();
    fin2.close();
    fout.clear();
    fout.close();
    return 0;
}
