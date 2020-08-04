//
// Created by klause on 2020/7/31.
//

#include <iostream>
#include "list.h"

void show(Item &item);

int main() {
    using namespace std;
    customer c1 = {"name1", 10};
    customer c2 = {"name2", 20};
    customer c3 = {"name3", 30};

    List l;
    if (l.is_empty()) {
        l.add(c1);
        l.add(c2);
        l.add(c3);
        l.visit(show);
        cout << "item count : " << l.item_count();
    }
    if (l.is_full())
        cout << "l is full!" << endl;
    return 0;
}

void show(Item &item) {
    std::cout << "show: " << item.fullname << " , " << item.payment << std::endl;
}
