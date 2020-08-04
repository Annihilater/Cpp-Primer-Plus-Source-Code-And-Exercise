//
// Created by klause on 2020/7/31.
//

#ifndef CPP_PRIMER_PLUS_STACK_H
#define CPP_PRIMER_PLUS_STACK_H

struct customer {
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack {
private:
    static const int max = 10;
    Item items[max];
    int top;
    int sum = 0;

    void get_sum(Item &item);

public:
    Stack();

    bool is_empty() const;

    bool is_full() const;

    bool push(const Item &item);

    bool pop(Item &item);

    void show_sum();
};

#endif //CPP_PRIMER_PLUS_STACK_H
