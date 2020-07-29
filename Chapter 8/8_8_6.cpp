//
// Created by klause on 2020/7/29.
//

#include <iostream>

using namespace std;

//函数模板
template<typename T>
T maxn(T ar[], int n) {
    T max = ar[0];
    for (int i = 1; i < n; ++i)
        if (ar[i] > max) max = ar[i];
    return max;
}

// template 后面有 <> 表示显式具体化，没有 <> 的表示显式实例化
template<>
char *maxn<char *>(char **ar, int n) {
    char *max = ar[0];
    for (int i = 1; i < n; ++i)
        if (strlen(ar[i]) > strlen(max)) max = ar[i];
    return max;
}

// output array
template<typename T>
void show(T *arr, int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

template<>
void show<char *>(char **arr, int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << endl;
}

int main() {
    int ar1[] = {0, 1, 2, 3, 4, 5};
    double ar2[] = {0, 1, 2, 3};
    char c1[] = "Hello";
    char c2[] = "America";
    char c3[] = "Full";
    char c4[] = "Goodname";
    char c5[] = "Csgo";
    char *ar3[] = {c1, c2, c3, c4, c5};

    show(ar1, 6);
    cout << "Max : " << maxn(ar1, 6) << endl << "------" << endl;
    show(ar2, 4);
    cout << "Max : " << maxn(ar2, 4) << endl << "------" << endl;
    show(ar3, 5);
    cout << "Max : " << maxn(ar3, 5) << endl << "------" << endl;
    return 0;
}


