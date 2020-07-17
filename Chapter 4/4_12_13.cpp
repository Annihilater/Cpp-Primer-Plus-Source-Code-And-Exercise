//
// Created by klause on 2020/7/17.
//

#include <iostream>
#include <vector>

void use_new(unsigned int n);

void use_vector(unsigned int n);

int main() {
    using namespace std;
    unsigned int n;
    cout << "Please input a integer: ";
    cin >> n;
    cout << "Your input number is: " << n << "\n";
    use_new(n);
    use_vector(n);
    return 0;
}

void use_new(unsigned int n) {
    using namespace std;
    int *p;

    cout << "   Use new: ";
    p = new int[n];

    if (n > 0) {
        p[0] = 5;
        cout << "p[0] = " << p[0] << "\n";
    }
    delete p;
}

void use_vector(unsigned int n) {
    using namespace std;

    cout << "Use vector: ";
    vector<int> a(n);

    if (n > 0) {
        a[0] = 5;
        cout << "a[0] = " << a[0];
    }
}
