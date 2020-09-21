//
// Created by klause on 2020/9/21.
//

#include <iostream>
#include <vector>

inline void show(std::string &s) { std::cout << s << " "; }

int main() {
    using namespace std;

    vector<string> mat_friends, pat_friends;
    string name;

    cout << "Mat! Enter your friends (Enter stop to stop): ";
    while (getline(cin, name) && name != "stop") {
        mat_friends.push_back(name);
        cout << "Anathor name: ";
    }

    cout << "Pat! Enter your friends (Enter stop to stop): ";
    while (getline(cin, name) && name != "stop") {
        pat_friends.push_back(name);
        cout << "Anathor name: ";
    }

    //sort vector
    sort(mat_friends.begin(), mat_friends.end());
    sort(pat_friends.begin(), pat_friends.end());

    //output two vector
    cout << "Mat's friends: " << endl;
    for_each(mat_friends.begin(), mat_friends.end(), show);
    cout << endl;
    cout << "Pat's friends: " << endl;
    for_each(pat_friends.begin(), pat_friends.end(), show);
    cout << endl;

    //merge to vectors
    vector<string> all_friends;
    all_friends.reserve(mat_friends.size() + pat_friends.size());
    all_friends.insert(all_friends.end(), mat_friends.begin(), mat_friends.end());
    all_friends.insert(all_friends.end(), pat_friends.begin(), pat_friends.end());

    sort(all_friends.begin(), all_friends.end());
    auto new_end = unique(all_friends.begin(), all_friends.end());
    cout << "All friends: " << endl;
    for_each(all_friends.begin(), all_friends.end(), show);
    cout << endl;


    return 0;
}
