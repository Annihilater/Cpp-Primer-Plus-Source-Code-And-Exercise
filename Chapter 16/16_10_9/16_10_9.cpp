//
// Created by klause on 2020/9/21.
//

#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <random>
#include <algorithm>

const int SIZE = 1000000;//一百万

int main() {
    using namespace std;

    //initialize a random vector
    vector<int> vi0(SIZE, 0);
    for (int i = 0; i < SIZE; ++i)
        vi0.at(i) = random();

    //initialize list and vector
    vector<int> vi(vi0);
    list<int> li(SIZE, 0);
    copy(vi0.begin(), vi0.end(), li.begin());

    //sort vector
    clock_t start = clock();
    sort(vi.begin(), vi.end());
    clock_t end = clock();
    cout << "sort vector time: " << (double) (end - start) / CLOCKS_PER_SEC << endl;

    //sort list
    start = clock();
    li.sort();
    end = clock();
    cout << "sort list time: " << (double) (end - start) / CLOCKS_PER_SEC << endl;

    //operation d
    copy(vi0.begin(), vi0.end(), li.begin());//刚刚排序过，现在将顺序重新打乱
    start = clock();
    copy(li.begin(), li.end(), vi.begin()); //链表复制到数组
    sort(vi.begin(), vi.end());             //对数组排序
    copy(vi.begin(), vi.end(), li.begin()); //数组复制到链表
    end = clock();
    cout << "copy + sort + copy vector time: " << (double) (end - start) / CLOCKS_PER_SEC << endl;

    return 0;
}
