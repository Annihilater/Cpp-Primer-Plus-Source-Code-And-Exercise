//
// Created by klause on 2020/8/31.
//

#ifndef CPP_PRIMER_PLUS_QUEUE_H
#define CPP_PRIMER_PLUS_QUEUE_H

#include "worker.h"

template<class Type>
class Queue {
private:
    enum {
        MAX = 3         //队列长度
    };
    Type items[MAX];    //使用数组构建队列
    int num{};          //队列元素的数量
public:
    explicit Queue();

    ~Queue();

    int count();

    bool isempty();

    bool isfull();

    bool add(Type &item);

    bool pop(Type &item);
};

template<class Type>
Queue<Type>::Queue() {
    num = 0;
}

template<class Type>
bool Queue<Type>::isempty() {
    return num == 0;
}

template<class Type>
bool Queue<Type>::isfull() {
    return num == MAX;
}

template<class Type>
bool Queue<Type>::add(Type &item) {
    if (num < MAX) {
        items[num] = item;
        num++;
        return true;
    } else
        return false;
}

template<class Type>
bool Queue<Type>::pop(Type &item) {
    if (num > 0) {
        item = items[num];
        num--;
        return true;
    } else
        return false;
}

template<class Type>
int Queue<Type>::count() {
    return num;
}

template<class Type>
Queue<Type>::~Queue() = default;

#endif //CPP_PRIMER_PLUS_QUEUE_H
