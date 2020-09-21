//
// Created by klause on 2020/9/18.
//

#include <iostream>
#include <random>
#include <vector>

using namespace std;

vector<int> Lotoo(int n, int m);

void run();

int main() {
    for (int i = 0; i < 10; ++i) {
        run();
    }
    return 0;
}

void run() {
    int n = 51;
    int m = 6;

    vector<int> v = Lotoo(n, m);
    for (int i : v) cout << i << " ";
    cout << endl;
}

vector<int> Lotoo(int n, int m) {
    vector<int> all;
    for (int i = 1; i <= n; ++i) {
        all.push_back(i);
    }

    srand((unsigned) time(0));
    // shuffle it
    random_shuffle(all.begin(), all.end());
    // random vector
    vector<int> rnd(all.begin(), all.begin() + m);
    return rnd;
}
