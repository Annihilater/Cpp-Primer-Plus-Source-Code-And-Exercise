//
// Created by klause on 2020/7/22.
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

void func1(box b);

void func2(box *pb);

void func3(box *pb);

int main() {
    box b = {"china", 5, 4, 3, 9};

    func3(&b);
    return 0;
}

//按值传递
void func1(box b) {
    cout << "Maker : " << b.maker << endl;
    cout << "Height: " << b.height << endl;
    cout << "Width : " << b.width << endl;
    cout << "Length: " << b.length << endl;
    cout << "Volume: " << b.volume << endl;
}

//按地址传递
void func2(box *pb) {
    pb->volume = pb->length * pb->width * pb->height;
}

//使用前两个函数
void func3(box *pb) {
    func1(*pb);
    func2(pb);
    func1(*pb);
}
