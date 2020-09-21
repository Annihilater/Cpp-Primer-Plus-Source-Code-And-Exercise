//
// Created by klause on 2020/9/18.
//

#include <iostream>

using namespace std;

const int SIZE = 10;

template<class T>
int reduce(T ar[], int n) {
    sort(ar, ar + n);                         //使用 STL 通用函数对数组进行原地排序、去重
    auto last = unique(ar, ar + n);           //unique 返回的是末位置
    int m = (int) (last - ar);                //末位置减初位置表示数组长度
    return m;
}

int main() {
    using namespace std;
    long ar[SIZE] = {9, 0, 2, 1, 8, 8, 3, 3, 3, 6};
    int n;
    n = reduce(ar, SIZE);
    cout << "排序去重后数组长度: " << n << endl;
    for (auto &i:ar)
        cout << i << " ";
    cout << endl;
    for (int i = 0; i < n; ++i)
        cout << ar[i] << " ";
    cout << endl;

    string ar2[SIZE] = {"hello", "good", "hello", "name", "name", "good", "baby"};
    n = reduce(ar2, SIZE);
    cout << "排序去重后数组长度: " << n << endl;
    for (auto &i : ar2)
        cout << i << " ";
    cout << endl;
    for (int i = 0; i < n; ++i)
        cout << ar2[i] << " ";
    return 0;
}
