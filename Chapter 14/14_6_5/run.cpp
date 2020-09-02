//
// Created by klause on 2020/8/30.
//

#include <iostream>
#include <array>
#include "14_6_5.h"

int main() {
    using namespace std;
    arrtype<string> sa;
    stacktype<double> stack_arr_db;
    arrtype<stacktype<Worker *>> arr_stk_wpr;

    cout << "stack_arr_db is empty: " << stack_arr_db.isempty();
    return 0;
}
