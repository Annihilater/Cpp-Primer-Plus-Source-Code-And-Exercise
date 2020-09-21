//
// Created by klause on 2020/9/18.
//

#include <iostream>

template<class T>
class TooBig {
private:
    T cutoff;
public:
    explicit TooBig(const T &t) : cutoff(t) {}

    bool operator()(const T &v) { return v > cutoff; }
};

int main() {
    using namespace std;
    bool bo = TooBig<int>(10)(15);
    cout << bo;
    return 0;
}
