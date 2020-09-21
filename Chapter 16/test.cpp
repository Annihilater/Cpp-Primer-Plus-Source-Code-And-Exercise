//
// Created by klause on 2020/9/15.
//

#include <iostream>
#include <list>

void out_int(int n) { std::cout << n << " "; }

int main() {
    using namespace std;
    list<int> one(5, 2);
    for_each(one.begin(), one.end(), out_int);
    return 0;
}
