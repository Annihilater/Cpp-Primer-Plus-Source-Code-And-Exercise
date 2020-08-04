//
// Created by klause on 2020/7/31.
//

#ifndef CPP_PRIMER_PLUS_PLORG_H
#define CPP_PRIMER_PLUS_PLORG_H

class Plorg {
private:
    static const int size = 19;
    char m_name[size];
    int m_ci;

public:
    Plorg();

    Plorg(char *name, int ci = 50);

    void set_ci(int ci);

    void show() const;
};

#endif //CPP_PRIMER_PLUS_PLORG_H
