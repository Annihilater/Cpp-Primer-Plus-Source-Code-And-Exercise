//
// Created by klause on 2020/8/7.
//

#ifndef CPP_PRIMER_PLUS_STACK_H
#define CPP_PRIMER_PLUS_STACK_H

typedef unsigned long Item;

class Stack {
private:
    enum {
        MAX = 10
    };
    Item *pitems;//Item 数组，需要使用 new 分配内存
    int size;
    int top;
public:
    Stack(int n = MAX);

    Stack(const Stack &st);

    ~Stack();

    bool isempty() const;

    bool isfull() const;

    bool push(const Item &item);

    bool pop(Item &item);

    Stack &operator=(const Stack &st);

    void show();
};

#endif //CPP_PRIMER_PLUS_STACK_H
