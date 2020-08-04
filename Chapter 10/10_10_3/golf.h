//
// Created by klause on 2020/7/31.
//

#ifndef CPP_PRIMER_PLUS_GOLF_H
#define CPP_PRIMER_PLUS_GOLF_H

class Golf {
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;

public:

    void set_golf(const char *name, int hc);

    int set_golf();

    void set_handicap(int hc);

    void show_golf() const;
};

#endif //CPP_PRIMER_PLUS_GOLF_H
