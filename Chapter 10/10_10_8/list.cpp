//
// Created by klause on 2020/7/31.
//

#include "list.h"
#include <iostream>

List::List() {
    n = 0;
}

bool List::is_empty() const {
    return n == 0;
}

bool List::is_full() const {
    return n == max;
}

bool List::add(const Item &item) {
    if (!this->is_full()) {
        items[n++] = item;
        std::cout << "push: " << item.fullname << " , " << item.payment << std::endl;
        return true;
    } else {
        std::cout << "full already" << std::endl;
        return false;
    }
}

void List::visit(void (*pf)(Item &)) {
    for (int i = 0; i < n; ++i)
        pf(items[i]); // (*pf)(items[i]);
}

void List::show(Item &item) {
    std::cout << "show: " << item.fullname << " , " << item.payment << std::endl;
}

int List::item_count() const {
    return n;
}
