//
// Created by klause on 2020/8/11.
//

#include "dma.h"
#include <iostream>

DMA::DMA(const char *l, int r) {
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

DMA::DMA(const DMA &rs) {
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}

DMA::~DMA() {
    delete[]label;
}

DMA &DMA::operator=(const DMA &rs) {
    if (this == &rs)
        return *this;
    delete[]label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const DMA &rs) {
    os << "Label  : " << rs.label << std::endl;
    os << "Rating : " << rs.rating << std::endl;
    return os;
}


baseDMA::baseDMA(const char *l, int r) : DMA(l, r) {

}

baseDMA::baseDMA(const baseDMA &rs) : DMA(rs) {

}

baseDMA::~baseDMA() {

}

baseDMA &baseDMA::operator=(const baseDMA &rs) {
    if (this == &rs)
        return *this;
    DMA::operator=(rs);
    return *this;
}

std::ostream &operator<<(std::ostream &os, const baseDMA &rs) {
    os << (const DMA &) rs;
    return os;
}

void baseDMA::view() {
    std::cout << *this;
}

lacksDMA::lacksDMA(const char *c, const char *l, int r) : DMA(l, r) {
    strcpy(color, c);
}

lacksDMA::lacksDMA(const char *c, const DMA &rs) : DMA(rs) {
    strcpy(color, c);
}

lacksDMA::~lacksDMA() {

}

lacksDMA &lacksDMA::operator=(const lacksDMA &rs) {
    if (this == &rs)
        return *this;
    strcpy(color, rs.color);
    return *this;
}

std::ostream &operator<<(std::ostream &os, lacksDMA &rs) {
    os << (const DMA &) rs;
    os << "Color  : " << rs.color << std::endl;
    return os;
}

void lacksDMA::view() {
    std::cout << *this;
}

lacksDMA::lacksDMA(const lacksDMA &ls) : DMA(ls) {
    strcpy(color, ls.color);
}


hasDMA::hasDMA(const char *s, const char *l, int r) : DMA(l, r) {
    style = new char[strlen(s) + 1];
    strcpy(style, s);
    style[-1] = '\0';
}

hasDMA::hasDMA(const char *s, const DMA &rs) : DMA(rs) {
    delete[]style;
    style = new char[strlen(s) + 1];
    strcpy(style, s);
    style[-1] = '\0';
}

hasDMA::hasDMA(const hasDMA &hs) : DMA(hs) {
    delete[]style;
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
    style[-1] = '\0';
}

hasDMA::~hasDMA() {
    delete[]style;
}

hasDMA &hasDMA::operator=(const hasDMA &hs) {
    if (this == &hs)
        return *this;
    DMA::operator=(hs);
    delete[]style;
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
    style[-1] = '\0';
    return *this;
}

std::ostream &operator<<(std::ostream &os, const hasDMA &hs) {
    os << (const DMA &) hs;
    os << "Style  : " << hs.style << std::endl;
    return os;
}

void hasDMA::view() {
    std::cout << *this;
}


