//
// Created by klause on 2020/8/30.
//

#include "14_6_3.h"

#include <utility>

Gloam::Gloam(int g, const char *s) : glip(g), Frabjous(s) {

}

Gloam::Gloam(int g, Frabjous f) : glip(g), Frabjous(std::move(f)) {
}

void Gloam::tell() {
    Frabjous::tell();
    cout << endl << "glip: " << glip << endl;
}
