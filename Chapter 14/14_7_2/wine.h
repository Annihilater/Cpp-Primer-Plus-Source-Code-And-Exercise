//
// Created by klause on 2020/8/30.
//

#ifndef CPP_PRIMER_PLUS_WINE_H
#define CPP_PRIMER_PLUS_WINE_H

#include <iostream>
#include <string>
#include <utility>
#include <valarray>

using namespace std;

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

    Pair(T1 a_val, T2 b_val) : a(std::move(a_val)), b(std::move(b_val)) {}

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


class Wine : private string, private Pair<valarray<int>, valarray<int>> {
private:
    typedef valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    int years;
public:
    Wine() {}

    Wine(const char *l, int y, const int yr[], const int bot[])
            : string(l), years(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {}

    Wine(const char *l, int y)
            : string(l), years(y), PairArray(ArrayInt(y), ArrayInt(y)) {}

    ~Wine() = default;

    void GetBottles() const;

    const string &Label() const { return (const string &) (*this); }

    int sum() const { return PairArray::second().sum(); }

    void Show() const;
};

#endif //CPP_PRIMER_PLUS_WINE_H
