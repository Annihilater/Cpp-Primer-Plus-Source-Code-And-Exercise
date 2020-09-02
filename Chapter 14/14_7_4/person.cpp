//
// Created by klause on 2020/9/1.
//

#include "person.h"

void Person::Show() {
    cout << "Name: " << first_name << ", " << last_name << endl;
}

double Gunslinger::Draw() const {
    return t;
}

void Gunslinger::Show() {
    Person::Show();
    cout << "time: " << t << ", num: " << num << endl;
}

int PokerPlayer::Draw() {
    return (int) random() % 52 + 1;
}

double BadDude::Gdraw() {
    return Gunslinger::Draw();
}

int BadDude::Cdraw() {
    return PokerPlayer::Draw();
}

void BadDude::Show() {
    Gunslinger::Show();
}
