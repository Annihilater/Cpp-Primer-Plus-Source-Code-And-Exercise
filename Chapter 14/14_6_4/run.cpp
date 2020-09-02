//
// Created by klause on 2020/8/30.
//

#include <iostream>
#include "14_6_4.h"

int main() {
    using namespace std;
    Stack<Worker *> sw;
    cout << "sw is empty: " << sw.isempty();
    return 0;
}

//class Stack<Worker *> {
//private:
//    enum {
//        MAX = 10
//    };
//    Worker * items[MAX];
//    int top;
//public:
//    Stack();
//
//    bool isempty();
//
//    bool isfull();
//
//    bool push(const Worker * &item);
//
//    bool pop(Worker * &item);
//};
