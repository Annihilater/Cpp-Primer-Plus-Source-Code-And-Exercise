//
// Created by klause on 2020/9/10.
//

#ifndef CPP_PRIMER_PLUS_TV_H
#define CPP_PRIMER_PLUS_TV_H

#include <iostream>

using namespace std;

class Remote;

class Tv {
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
public:
    friend class Remote;

    enum {
        Off, On
    };
    enum {
        MinVal, MaxVal = 20
    };
    enum {
        Antenna, Cable
    };
    enum {
        TV, DVD
    };

    explicit Tv(int s = Off, int mc = 125)
            : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}

    void onoff() { state = (state == On) ? Off : On; }

    bool ison() const { return state == On; }

    bool volup();

    bool voldown();

    void chanup();

    void chandown();

    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }

    void set_input() { input = (input == TV) ? DVD : TV; }

    void settings() const;

    void change_remote_type(Remote &r);
};


class Remote {
private:
    enum {
        Normal, Interaction
    };
    int mode;
    int type;
public:
    friend class Tv;

    explicit Remote(int m = Tv::TV, int t = Normal) : mode(m), type(t) {}

    static bool volup(Tv &t) { return t.volup(); }

    static bool voldown(Tv &t) { return t.voldown(); }

    static void onoff(Tv &t) { return t.onoff(); }

    static void chanup(Tv &t) { return t.chanup(); }

    static void chandown(Tv &t) { return t.chandown(); }

    static void set_chan(Tv &t, int c) { t.channel = c; }

    static void set_mode(Tv &t) { t.set_mode(); }

    static void set_input(Tv &t) { t.set_input(); }

    void show_mode() { cout << "Remote Type: " << type << endl; }

    void change_type() { type = (type == Normal) ? Interaction : Normal; }

};


#endif //CPP_PRIMER_PLUS_TV_H
