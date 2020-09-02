//
// Created by klause on 2020/8/30.
//

#include "wine.h"

void Wine::GetBottles() const {
    using namespace std;
    int y, b;
//    ArrayInt yr(years), bt(years);

    cout << "Enter " << Label() << " data for " << years << " year(s)" << endl;
//    ((PairArray &) *this).first()[0] = 1988;
//    ((PairArray &) *this).first()[1] = 1994;
//    ((PairArray &) *this).first()[2] = 1998;
//    ((PairArray &) *this).first()[3] = 2001;
//    ((PairArray &) *this).second()[0] = 42;
//    ((PairArray &) *this).second()[1] = 58;
//    ((PairArray &) *this).second()[2] = 122;
//    ((PairArray &) *this).second()[3] = 144;
//    PairArray::first()[0] = 1988;
//    PairArray::first()[1] = 1994;
//    PairArray::first()[2] = 1998;
//    PairArray::first()[3] = 2001;
//    PairArray::second()[0] = 42;
//    PairArray::second()[1] = 58;
//    PairArray::second()[2] = 122;
//    PairArray::second()[3] = 144;

    for (int i = 0; i < years; ++i) {
        cout << "Enter year:";
        cin >> y;
        ((PairArray &) *this).first()[i] = y;
        cout << "Enter bottles for that year: ";
        cin >> b;
        ((PairArray &) *this).second()[i] = b;
    }
}

void Wine::Show() const {
    using namespace std;
    cout << "Wine: " << Label() << endl;
    cout << "Year " << " Bottles" << endl;
    for (int i = 0; i < years; ++i) {
        cout << PairArray::second()[i] << "     ";
        cout << PairArray::first()[i] << endl;
    }
}


