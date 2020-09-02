//
// Created by klause on 2020/8/30.
//

#include "wine.h"

Wine::Wine()
        : label("none"), years(0), data(ArrayInt(0), ArrayInt(0)) {
}

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
        : label(l), years(y), data(ArrayInt(yr, y), ArrayInt(bot, y)) {
}

Wine::Wine(const char *l, int y)
        : label(l), years(y), data(ArrayInt(y), ArrayInt(y)) {
}

Wine::Wine(const Wine &w)
        : label(w.label), years(w.years), data(w.data.first(), w.data.second()) {
}

void Wine::GetBottles() {
    using namespace std;
    int y, b;

    cout << "Enter " << label << " data for " << years << " year(s)" << endl;
    for (int i = 0; i < years; ++i) {
        cout << "Enter year:";
        cin >> y;
        data.first()[i] = y;
        cout << "Enter bottles for that year: ";
        cin >> b;
        data.second()[i] = b;
    }
}

int Wine::sum() const {
    return data.second().sum();
}

void Wine::Show() const {
    using namespace std;
    cout << "Wine: " << label << endl;
    cout << "Year " << " Bottles" << endl;
    for (int i = 0; i < years; ++i) {
        cout << data.second()[i] << "   ";
        cout << data.first()[i] << endl;
    }
}


