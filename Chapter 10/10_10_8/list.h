//
// Created by klause on 2020/7/31.
//

#ifndef CPP_PRIMER_PLUS_LIST_H
#define CPP_PRIMER_PLUS_LIST_H

struct customer {
    char fullname[35];
    double payment;
};

typedef customer Item;

class List {

private:
    static const int max = 10;
    Item items[max];
    int n;

public:
    List();

    bool is_empty() const;

    bool is_full() const;

    int item_count() const;

    bool add(const Item &item);

    void visit(void (*pf)(Item &));

    void show(Item &item);
};

#endif //CPP_PRIMER_PLUS_LIST_H
