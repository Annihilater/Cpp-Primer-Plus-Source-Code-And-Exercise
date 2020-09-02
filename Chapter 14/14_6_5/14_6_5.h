//
// Created by klause on 2020/8/30.
//

#ifndef CPP_PRIMER_PLUS_14_6_5_H
#define CPP_PRIMER_PLUS_14_6_5_H

#include <iostream>

class Worker {
private:
    std::string fullname;
    long id;
protected:
    virtual void Data() const;

    virtual void Get();

public:
    Worker() : fullname("no one"), id(0L) {}

    Worker(std::string s, long n) : fullname(std::move(s)), id(n) {}

    virtual ~Worker() = 0;

    virtual void Set() = 0;

    virtual void Show() const = 0;
};

template<class Type>
class Stack {
private:
    enum {
        MAX = 10
    };
    Type items[MAX];
    int top;
public:
    Stack();

    bool isempty();

    bool isfull();

    bool push(const Type &item);

    bool pop(Type &item);
};

template<class Type>
Stack<Type>::Stack() {
    top = 0;
}

template<class Type>
bool Stack<Type>::isempty() {
    return top == 0;
}

template<class Type>
bool Stack<Type>::isfull() {
    return top == MAX;
}

template<class Type>
bool Stack<Type>::push(const Type &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else
        return false;
}

template<class Type>
bool Stack<Type>::pop(Type &item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else
        return false;
}


template<typename T>
using arrtype = std::array<T, 12>;

template<typename T>
using stacktype = Stack<T>;

#endif //CPP_PRIMER_PLUS_14_6_5_H
