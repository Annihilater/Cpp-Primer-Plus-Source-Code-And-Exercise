//
// Created by klause on 2020/8/7.
//

#ifndef CPP_PRIMER_PLUS_STRING2_H
#define CPP_PRIMER_PLUS_STRING2_H

#include <iostream>

using std::ostream;
using std::istream;

class String {
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    String(const char *s);

    String();

    String(const String &);

    ~String();

    int length() const { return len; }

    String operator+(const String &st);

    String &operator=(const String &st);

    String &operator=(const char *s);

    char &operator[](int i);

    const char &operator[](int i) const;

    friend String operator+(const char *, String &st);

    friend bool operator<(const String &st1, const String &st2);

    friend bool operator>(const String &st1, const String &st2);

    friend bool operator==(const String &st1, const String &st2);

    friend ostream &operator<<(ostream &os, const String &st);

    friend istream &operator>>(istream &is, String &st);

    static int HowMany();

    void stringlow();

    void stringup();

    int has(char ch);
};

#endif //CPP_PRIMER_PLUS_STRING2_H
