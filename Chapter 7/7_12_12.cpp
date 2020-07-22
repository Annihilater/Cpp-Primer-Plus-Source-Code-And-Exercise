//
// Created by klause on 2020/7/22.
//

#include <iostream>

struct applicant {
    char *name;
    int credit_ratings[3];
};

void show1(struct applicant a);

void show2(applicant *p);

int main() {
    using namespace std;
    applicant a = {"good", 1, 2, 3};
    show1(a);
    show2(&a);
    return 0;
}

void show1(struct applicant a) {
    using namespace std;
    cout << endl << a.name << endl;
    for (int credit_rating : a.credit_ratings) {
        cout << credit_rating << " ";
    }
}

void show2(applicant *p) {
    using namespace std;
    cout << endl << p->name << endl;
    for (int credit_rating : p->credit_ratings) {
        cout << credit_rating << " ";
    }

}
