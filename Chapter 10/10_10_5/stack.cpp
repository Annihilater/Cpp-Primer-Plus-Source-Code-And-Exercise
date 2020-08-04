//
// Created by klause on 2020/7/31.
//

#include "stack.h"
#include <iostream>

Stack::Stack() {
    top = 0;
}

bool Stack::is_empty() const {
    return top == 0;
}

bool Stack::is_full() const {
    return top == max;
}

bool Stack::push(const Item &item) {
    if (top < max) {
        items[top++] = item;
        std::cout << "push: " << item.fullname << " , " << item.payment << std::endl;
        return true;
    } else
        return false;
}

bool Stack::pop(Item &item) {
    if (top > 0) {
        item = items[--top];
        get_sum(item);
        return true;
    } else
        return false;
}

void Stack::get_sum(Item &item) {
    sum += item.payment;
    std::cout << "Sum: " << sum << std::endl;
}

void Stack::show_sum() {
    std::cout << "show_sum: " << sum << std::endl;
}
