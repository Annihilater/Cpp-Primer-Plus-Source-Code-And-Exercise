//
// Created by klause on 2020/7/30.
//

#include <iostream>

#define SIZE 2
struct chaff {
    char dross[20];
    int slag;
};
const int BUF = 512;
char buffer[BUF];

void show_chaff(chaff &c);

int main() {
    using namespace std;
    chaff *p;
    string tmp;

    p = new(buffer)chaff[SIZE];         //使用定位 new
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter " << i + 1 << " chaff: " << endl;
        cout << "Enter dross: ";
        getline(cin, tmp);
        if (tmp != "")
            strcpy(p[i].dross, tmp.c_str());
        cout << "Enter slag: ";
        cin >> p[i].slag;
        cin.get();                      //除去换行符
    }

    for (int j = 0; j < SIZE; ++j) {
        show_chaff(p[j]);
    }
    return 0;
}

void show_chaff(chaff &c) {
    std::cout << "dross: " << c.dross << std::endl;
    std::cout << "slag : " << c.slag << std::endl;

}

