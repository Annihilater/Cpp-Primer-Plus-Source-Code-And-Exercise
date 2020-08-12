//
// Created by klause on 2020/8/11.
//

#include "port.h"

Port::Port(const char *br, const char *st, int b) {
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    brand[-1] = '\0';
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port &p) {
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    brand[-1] = '\0';
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port &Port::operator=(const Port &p) {
    if (this == &p)
        return *this;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    brand[-1] = '\0';
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port &Port::operator+=(int b) {
    bottles += b;
    return *this;
}

Port &Port::operator-=(int b) {
    if (bottles >= b)
        bottles -= b;
    else
        cout << "Failed!" << endl;
    return *this;
}

void Port::Show() const {
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream &operator<<(ostream &os, const Port &p) {
    os << p.brand << ", " << p.style << ", " << p.bottles << endl;
    return os;
}

VintagePort::VintagePort() {
    Port();
    nickname = new char[5];
    strcpy(nickname, "null");
    nickname[-1] = '\0';
    year = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) : Port(br, "none", b) {
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    nickname[-1] = '\0';
    year = y;
}

VintagePort::VintagePort(const VintagePort &vp) : Port(vp) {
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    nickname[-1] = '\0';
    year = vp.year;
}

VintagePort &VintagePort::operator=(const VintagePort &vp) {
    if (this == &vp)
        return *this;
    Port::operator=(vp);
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    nickname[-1] = '\0';
    year = vp.year;
    return *this;
}

void VintagePort::Show() const {
    Port::Show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}

ostream &operator<<(ostream &os, VintagePort &vp) {
    os << (const Port &) vp;
    os << vp.nickname << ", " << vp.year << endl;
    return os;
}
