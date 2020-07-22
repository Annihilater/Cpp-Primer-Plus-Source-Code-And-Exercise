//
// Created by klause on 2020/7/22.
//

#include <iostream>

struct applicant {
    char name[20];
    int credit_ratings[3];
};

void f1(applicant *a);

const char *f2(const applicant *a1, const applicant *a2);

int main() {
    using namespace std;
    applicant a = {"good", 1, 2, 3};
    applicant a2 = {"good2", 12, 22, 32};

    cout << "分别使用 auto 和手动定义的方式声明指向 f1 和指向 f2 的指针: " << endl;
    auto p1 = &f1;
    void (*p3)(applicant *) = &f1;
    auto p2 = &f2;
    const char *(*p4)(const applicant *, const applicant *) =&f2;

    p1(&a);//直接指针调用函数
    p3(&a);//直接指针调用函数
    (*p1)(&a);//将指针转换为函数名，再调用函数
    (*p3)(&a);//将指针转换为函数名，再调用函数

    p2(&a, &a2);//直接指针调用函数
    p4(&a, &a2);//直接指针调用函数
    (*p2)(&a, &a2);//将指针转换为函数名，再调用函数
    (*p4)(&a, &a2);//将指针转换为函数名，再调用函数


    cout << "ap 为 包含 5 个指针的数组，每个指针都指向 f1: " << endl;
    void (*ap[5])(applicant *) = {f1, f1, &f1, &f1, &f1};
    for (auto &i : ap) {
        i(&a);
    }
    cout << "使用 typedef : " << endl;
    typedef void (*px)(applicant *);
    px ap2[5] = {f1, f1, &f1, &f1, &f1};
    for (auto &i : ap2) {
        i(&a);
    }

    cout << "pa 是一个指针，指向包含 10 个元素的数组，每个元素的类型都是指向 f2 函数的指针: " << endl;
    const char *(*pa[10])(const applicant *, const applicant *) ={f2, f2, f2, f2, f2, f2, f2, f2, f2, f2};
    const auto p5 = &a;
    const auto p6 = &a2;
    for (auto &j : pa) {
        cout << (*j)(p5, p6) << " ";
    }
    cout << endl;

    cout << "使用 typedef : " << endl;
    typedef const char *(*pf2)(const applicant *, const applicant *);
    pf2 pa2[10] = {f2, f2, f2, f2, f2, f2, f2, f2, f2, f2};
    const auto p7 = &a;
    const auto p8 = &a2;
    for (auto &j : pa2) {
        cout << (*j)(p7, p8) << " ";
    }


    cout << endl;
    cout << p1 << endl;
    cout << p2 << endl;
    return 0;
}

void f1(applicant *a) {
    using namespace std;
    cout << a->name << endl;
    for (int credit_rating : a->credit_ratings) {
        cout << credit_rating << " ";
    }
    cout << endl;
}

const char *f2(const applicant *a1, const applicant *a2) {
    const char *p = "hello";
    return p;
}
