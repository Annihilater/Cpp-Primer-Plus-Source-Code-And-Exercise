//
// Created by klause on 2020/7/17.
//

#include <iostream>
#include <array>

int main() {
    using namespace std;
    const int Size{3};
    float sum = 0;
    array<float, Size> ar{};

    for (int i = 0; i < Size; ++i) {
        cout << "Please input " << i + 1 << " score : ";
        cin >> ar[i];
        sum += ar[i];
    }

    cout << "Times     : " << Size << endl;
    cout << "Sum score : " << sum << endl;
    cout << "Average   : " << float(sum / Size) << endl;

    return 0;
}
