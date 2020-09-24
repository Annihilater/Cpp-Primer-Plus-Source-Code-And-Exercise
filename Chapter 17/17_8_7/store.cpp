//
// Created by klause on 2020/9/24.
//

#include "store.h"

void Store::operator()(const string &s) {
    size_t len = s.length();

    // store string length
    os.write((char *) &len, sizeof(size_t));

    // store string data
    os.write(s.data(), len);
}
