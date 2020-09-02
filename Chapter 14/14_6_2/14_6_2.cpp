//
// Created by klause on 2020/8/30.
//

#include "14_6_2.h"
#include <utility>

Gloam::Gloam(int g, const char *s) : glip(g), fb(s) {
}

Gloam::Gloam(int g, Frabjous f) : glip(g), fb(std::move(f)) {
}

void Gloam::tell() {
    fb.tell();
    cout << endl << "glip: " << glip << endl;
}
