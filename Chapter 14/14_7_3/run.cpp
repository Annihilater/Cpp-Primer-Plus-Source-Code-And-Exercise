//
// Created by klause on 2020/8/31.
//
#include <iostream>
#include "queue.h"

const int SIZE = 5;

int main() {
    using namespace std;
    Queue<Worker *> queue_worker;

    Worker w1("name1", 1);
    if (queue_worker.isempty())
        cout << "queue is empty" << endl;
    else
        cout << "queue is not empty" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "add w1: " << i + 1 << endl;
        queue_worker.add(reinterpret_cast<Worker *&>(w1));
        if (queue_worker.isfull()) {
            cout << "queue is full" << endl;
        } else {
            cout << "queue is not full" << endl;
            cout << "count: " << queue_worker.count() << endl;
        }
        cout << endl;
    }
    return 0;
}
