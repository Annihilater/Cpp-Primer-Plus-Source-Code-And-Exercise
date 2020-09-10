//
// Created by klause on 2020/9/4.
//
#include <iostream>

using namespace std;


class muff;

class cuff {
public:
    static void snip(muff &);
};

class muff {
};

void cuff::snip(muff &) {
    cout << "good job!" << endl;
}

int main() {
    cuff c;
    muff m;
    c.snip(m);
    return 0;
}
