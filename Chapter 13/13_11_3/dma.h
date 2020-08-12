//
// Created by klause on 2020/8/11.
//

#ifndef CPP_PRIMER_PLUS_DMA_H
#define CPP_PRIMER_PLUS_DMA_H

#include <iostream>

class DMA {
private:
    char *label;
    int rating;
public:
    DMA(const char *l = "null", int r = 0);

    DMA(const DMA &rs);

    virtual ~DMA();

    virtual void view() = 0;

    DMA &operator=(const DMA &rs);

    friend std::ostream &operator<<(std::ostream &os, const DMA &rs);
};

class baseDMA : public DMA {
public:
    baseDMA(const char *l = "null", int r = 0);

    baseDMA(const baseDMA &rs);

    virtual ~baseDMA();

    virtual void view();

    baseDMA &operator=(const baseDMA &rs);

    friend std::ostream &operator<<(std::ostream &os, const baseDMA &rs);
};

class lacksDMA : public DMA {
private:
    enum {
        COL_LEN = 40
    };
    char color[COL_LEN];
public:
    lacksDMA(const char *c = "blank", const char *l = "null", int r = 0);

    lacksDMA(const char *c, const DMA &rs);

    lacksDMA(const lacksDMA &ls);

    virtual ~lacksDMA();

    virtual void view();

    lacksDMA &operator=(const lacksDMA &rs);

    friend std::ostream &operator<<(std::ostream &os, lacksDMA &rs);
};

class hasDMA : public DMA {
private:
    char *style;
public:
    hasDMA(const char *s = "none", const char *l = "null", int r = 0);

    hasDMA(const char *s, const DMA &rs);

    hasDMA(const hasDMA &hs);

    virtual ~hasDMA();

    virtual void view();

    hasDMA &operator=(const hasDMA &rs);

    friend std::ostream &operator<<(std::ostream &os, const hasDMA &hs);
};

#endif //CPP_PRIMER_PLUS_DMA_H
