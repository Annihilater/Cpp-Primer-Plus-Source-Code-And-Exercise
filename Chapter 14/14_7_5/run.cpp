//
// Created by klause on 2020/9/2.
//

#include <iostream>
#include "emp.h"

int main() {
    using namespace std;

    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();

    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();

    highfink hf(ma, "Curly Kew");
    hf.ShowAll();

    cout << "Press a key for next phase: " << endl;
    cin.get();
    highfink hf2;
    hf2.SetAll();

    cout << "Using an abstr_emp * pointer: " << endl;
    abstr_emp *tri[4] = {&em, &fi, &hf, &hf2};
    for (auto &i : tri) {
        i->ShowAll();
    }

    //当类中包含纯虚函数时，怎不能创建该类的对象
//    abstr_emp tri2[4] = {(abstr_emp &) em, (abstr_emp &) fi, (abstr_emp &) hf, (abstr_emp &) hf2};
//    for (auto &j : tri2) {
//        j.ShowAll();
//    }
    return 0;
}
