//
// Created by klause on 2020/8/30.
//

#ifndef CPP_PRIMER_PLUS_WINE_H
#define CPP_PRIMER_PLUS_WINE_H

#include <iostream>
#include <string>
#include <valarray>

template<class T1, class T2>
class Pair {
private:
    T1 a;
    T2 b;
public:
    T1 &first();

    T2 &second();

    T1 first() const { return a; }

    T2 second() const { return b; }

    Pair(const T1 &a_val, const T2 &b_val) : a(a_val), b(b_val) {}

    Pair() = default;

    Pair(const Pair<T1, T2> &p);
};

template<class T1, class T2>
T1 &Pair<T1, T2>::first() {
    return a;
}

template<class T1, class T2>
T2 &Pair<T1, T2>::second() {
    return b;
}

template<class T1, class T2>
Pair<T1, T2>::Pair(const Pair<T1, T2> &p) {
    a = p.a;
    b = p.b;
}


class Wine {
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    std::string label;
    PairArray data;
    int years;
public:
    Wine();

    Wine(const char *l, int y, const int yr[], const int bot[]);

    Wine(const char *l, int y);

    Wine(const Wine &w);

    ~Wine() = default;

    void GetBottles();

    const std::string &Label() const { return label; }

    int sum() const;

    void Show() const;
};

#endif //CPP_PRIMER_PLUS_WINE_H
