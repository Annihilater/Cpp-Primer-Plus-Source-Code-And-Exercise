//
// Created by klause on 2020/9/10.
//

#include <iostream>
#include "tv.h"

int main() {
    using namespace std;

    Tv s42;
    cout << "Initial settings for 42 TV: " << endl;
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << "Adjusted settings for 42 TV: " << endl;
    s42.chanup();
    cout << "Adjusted settings for 42 TV: " << endl;
    s42.settings();

    Remote grey;

    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "42 settings after using remote: " << endl;
    s42.settings();

    grey.show_mode();
    cout << "s42 change remote type..." << endl;
    s42.change_remote_type(grey);
    grey.show_mode();

    cout << endl;

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58, 28);
    cout << "58 settings: " << endl;
    s58.settings();

    grey.show_mode();
    cout << "s58 change remote type..." << endl;
    s58.change_remote_type(grey);
    grey.show_mode();

    return 0;
}
