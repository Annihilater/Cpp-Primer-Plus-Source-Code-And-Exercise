//
// Created by klause on 2020/9/22.
//

#include <iostream>
#include <fstream>

int main() {
    using namespace std;
    int n;

    cout << "Please enter an int: ";
    cin >> n;

    cout << right << showbase;  //左对齐、显示进制前缀
    cout << setw(15) << "DEC";
    cout << setw(15) << "HEX";
    cout << setw(15) << "OCT" << endl;

    cout << dec << setw(15) << n;
    cout << hex << setw(15) << n;
    cout << oct << setw(15) << n;

    return 0;
}
