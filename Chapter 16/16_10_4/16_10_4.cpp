//
// Created by klause on 2020/9/18.
//

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;
const int SIZE = 10;

void output(long n) { cout << n << " "; }

int reduce(long ar[], int n);

void show_list(list<long> &l);

void show_ar(long ar[], int n);

int main() {
    long ar[SIZE] = {9, 0, 2, 1, 8, 8, 3, 3, 3, 6};
    int n;
    n = reduce(ar, SIZE);
    cout << "排序去重后数组长度: " << n << endl;

    show_ar(ar, n);
    return 0;
}

int reduce(long ar[], int n) {
    //使用 STL 通用函数对数组进行原地排序、去重
    sort(ar, ar + n);
    auto last = unique(ar, ar + n);     //unique 返回的是末位置
    int m = (int) (last - ar);                //末位置减初位置表示数组长度

    //将数组转换为 list 进行排序、去重
    list<long> l;
    for (int j = 0; j < n; ++j)
        l.push_back(ar[j]);

    cout << "原数组: ";
    show_list(l);

    l.sort();           //排序
    cout << "排序后: ";
    show_list(l);

    l.unique();         //去重
    cout << "去重后: ";
    show_list(l);

    return m;
}

void show_list(list<long> &l) {
    for_each(l.begin(), l.end(), output);
    cout << endl;
}

void show_ar(long ar[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << ar[i] << " ";
    }
    cout << endl;
}
