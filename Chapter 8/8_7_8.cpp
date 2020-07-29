//
// Created by klause on 2020/7/29.
//

#include <iostream>

using namespace std;
struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

template<typename box>
box max_volume(box b1, box b2) {
    b1.volume = b1.height * b1.width * b1.length;
    b2.volume = b2.height * b2.width * b2.length;
    return b1.volume > b2.volume ? b1 : b2;
}

int main() {
    box b1 = {"maker1", 5, 4, 3, 0};
    box b2 = {"maker2", 10, 9, 8, 0};

    box max_box = max_volume(b1, b2);
    cout << "The max volume box: " << endl;
    cout << "maker : " << max_box.maker << endl;
    cout << "height: " << max_box.height << endl;
    cout << "width : " << max_box.width << endl;
    cout << "length: " << max_box.length << endl;
    cout << "volume: " << max_box.volume << endl;
    return 0;
}


