//
// Created by klause on 2020/8/11.
//

#include <iostream>
#include "dma.h"

int main() {
    using namespace std;

    baseDMA a1("label1", 8);
    lacksDMA a2("color1", "label2", 9);
    hasDMA a3("style1", "label3", 10);

    cout << "Displaying baseDMA object:\n";
    a1.view();
    cout << "Displaying lacksDMA object:\n";
    a2.view();
    cout << "Displaying hasDMA object:\n";
    a3.view();

    lacksDMA a4(a2);
    cout << "Result of lacksDMA copy:\n";
    a4.view();

    hasDMA a5;
    a5 = a3;
    cout << "Result of hasDMA assignment:\n";
    a5.view();
    return 0;
}
