//
// Created by klause on 2020/7/23.
//
#include <iostream>

using namespace std;

struct box {
    char make[40];
    float height;
    float width;
    float length;
    float volume;
};

void show(const box &);

void set_volume(box &);


int main() {
    box b = {"Bob", 5, 4, 3, 9};

    show(b);
    set_volume(b);
    show(b);
    return 0;
}

void show(const box &b) {
    cout << b.make << endl;
    cout << b.height << endl;
    cout << b.width << endl;
    cout << b.length << endl;
    cout << b.volume << endl;
}

void set_volume(box &b) {
    b.volume = b.length * b.width * b.height;
}
