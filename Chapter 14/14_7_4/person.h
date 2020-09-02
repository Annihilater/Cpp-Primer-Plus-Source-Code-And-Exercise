//
// Created by klause on 2020/9/1.
//

#ifndef CPP_PRIMER_PLUS_PERSON_H
#define CPP_PRIMER_PLUS_PERSON_H

#include <iostream>
#include <utility>

using namespace std;

class Person {
private:
    string first_name;
    string last_name;
public:
    Person(string s1, string s2)
            : first_name(std::move(s1)), last_name(std::move(s2)) {}

    Person(Person &p)
            : first_name(std::move(p.first_name)), last_name(std::move(p.last_name)) {}

    virtual void Show();
};

class Gunslinger : virtual public Person {
private:
    double t;
    int num;
public:
    Gunslinger(string s1, string s2, double d, int n)
            : Person(std::move(s1), std::move(s2)), t(d), num(n) {}

    Gunslinger(Person &p, double d, int n)
            : Person(p), t(d), num(n) {}

    double Draw() const;

    void Show() override;
};

class PokerPlayer : virtual public Person {
private:
public:
    PokerPlayer(string s1, string s2)
            : Person(std::move(s1), std::move(s2)) {}

    explicit PokerPlayer(Person &p)
            : Person(p) {}

    static int Draw();
};


class BadDude : virtual public Gunslinger, virtual public PokerPlayer {
private:
public:
    BadDude(string s1, string s2, double d, int n)
            : Person(std::move(s1), std::move(s2)), Gunslinger(s1, s2, d, n), PokerPlayer(s1, s2) {}

    BadDude(Person &p, double d, int n)
            : Person(p), Gunslinger(p, d, n), PokerPlayer(p) {}

    double Gdraw();

    static int Cdraw();

    void Show() override;
};

#endif //CPP_PRIMER_PLUS_PERSON_H
