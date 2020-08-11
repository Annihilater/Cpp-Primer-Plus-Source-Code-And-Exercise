//
// Created by klause on 2020/8/6.
//

#ifndef CPP_PRIMER_PLUS_COW_H
#define CPP_PRIMER_PLUS_COW_H

class Cow {
private:
    char name[20];
    char *hobby;
    double weight;
public:
    Cow();

    Cow(const char *nm, const char *ho, double wt);

    Cow(const Cow &c);

    ~Cow();

    Cow &operator=(const Cow &c);

    void ShowCow() const;

};

#endif //CPP_PRIMER_PLUS_COW_H
