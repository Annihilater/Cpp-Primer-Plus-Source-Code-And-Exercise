//
// Created by klause on 2020/9/21.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Review {
    string title;
    int rating{};
    double price{};
};

typedef shared_ptr<Review> sr;

inline void show(int i) { cout << i << " "; }

bool operator<(const sr &r1, const sr &r2);

bool worseThan(const sr &r1, const sr &r2);

bool FillReview(sr &rr);

void ShowReview(const sr &rr);

void sort_by_letters(vector<sr> books);

void sort_by_rating_up(vector<sr> books);

void sort_by_rating_down(vector<sr> books);

void sort_by_price_up(vector<sr> books);

void sort_by_price_down(vector<sr> books);

void sort_by_original(vector<sr> books);

bool compare_by_letters(const sr &r1, const sr &r2);

bool compare_by_rating_up(const sr &r1, const sr &r2);

bool compare_by_rating_down(const sr &r1, const sr &r2);

bool compare_by_price_up(const sr &r1, const sr &r2);

bool compare_by_price_down(const sr &r1, const sr &r2);

void show_menu();

int main() {
    bool is_quit = false;
    vector<sr> books;

    //test case
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    random_shuffle(v.begin(), v.end());
    for_each(v.begin(), v.end(), show);
    cout << endl;

    for (int i = 0; i < 10; ++i) {
        sr temp(new Review);
        string title = "title";
        title.push_back((char) (96 + v.at(i)));
        temp->title = title;
        temp->rating = v.at(i);
        temp->price = v.at(i) * 10;
        books.push_back(temp);
    }

//    while (FillReview(temp))
//        books.push_back(temp);

    if (!books.empty()) {
        cout << "Thank you. You entered the following " << books.size() << " ratings: " << endl;
        show_menu();
        char ch;
        while (true) {
            cin >> ch;
            switch (ch) {
                case ('a'): {
                    sort_by_original(books);
                    break;
                }
                case ('b'): {
                    sort_by_letters(books);
                    break;
                }
                case ('c'): {
                    sort_by_rating_up(books);
                    break;
                }
                case ('d'): {
                    sort_by_rating_down(books);
                    break;
                }
                case ('e'): {
                    sort_by_price_up(books);
                    break;
                }
                case ('f'): {
                    sort_by_price_down(books);
                    break;
                }
                case ('q'): {
                    is_quit = true;
                    break;
                }
                default:
                    cout << "Invalid select, please a~f (q to quit): ";
            }
            if (is_quit) break;
            show_menu();
        }
    }

    cout << "Bye!" << endl;
    return 0;
}

void show_menu() {
    cout << "Please enter a~f to select a method to show books(q to quit): " << endl;
    cout << "a.original     b.letters" << endl;
    cout << "c.rating up    d.rating down" << endl;
    cout << "e.price up     f.price down" << endl;
    cout << "q.quit" << endl;
}


bool operator<(const sr &r1, const sr &r2) {
    if (r1->title < r2->title)
        return true;
    else return r1->title == r2->title && r1->rating < r2->rating;
}

bool worseThan(const sr &r1, const sr &r2) {
    return r1->rating < r2->rating;
}

bool FillReview(sr &rr) {
    cout << "Enter book title (quit to quit): ";
    getline(cin, rr->title);
    cout << "Enter book rating: ";
    cin >> rr->rating;
    cout << "Enter book price: ";
    cin >> rr->price;
    if (!cin) return false;
    while (cin.get() != '\n') continue;
    return true;
}

void ShowReview(const sr &rr) {
    cout << rr->rating << "\t" << rr->title << "\t" << rr->price << endl;
}

void sort_by_original(vector<sr> books) {
    cout << "Rating \t Book \t Price" << endl;
    for_each(books.begin(), books.end(), ShowReview);
}

void sort_by_letters(vector<sr> books) {
    sort(books.begin(), books.end(), compare_by_letters);

    cout << "Sorted by rating up:" << endl;
    cout << "Rating \t Book \t Price" << endl;
    for_each(books.begin(), books.end(), ShowReview);
}

void sort_by_rating_up(vector<sr> books) {
    sort(books.begin(), books.end(), compare_by_rating_up);

    cout << "Sorted by rating up:" << endl;
    cout << "Rating \t Book \t Price" << endl;
    for_each(books.begin(), books.end(), ShowReview);
}

void sort_by_rating_down(vector<sr> books) {
    sort(books.begin(), books.end(), compare_by_rating_down);

    cout << "Sorted by rating down:" << endl;
    cout << "Rating \t Book \t Price" << endl;
    for_each(books.begin(), books.end(), ShowReview);
}

void sort_by_price_up(vector<sr> books) {
    sort(books.begin(), books.end(), compare_by_price_up);

    cout << "Sorted by price up:" << endl;
    cout << "Rating \t Book \t Price" << endl;
    for_each(books.begin(), books.end(), ShowReview);
}

void sort_by_price_down(vector<sr> books) {
    sort(books.begin(), books.end(), compare_by_price_down);

    cout << "Sorted by price down:" << endl;
    cout << "Rating \t Book \t Price" << endl;
    for_each(books.begin(), books.end(), ShowReview);
}

bool compare_by_letters(const sr &r1, const sr &r2) {
    return r1->title < r2->title;
}

bool compare_by_rating_up(const sr &r1, const sr &r2) {
    return r1->rating < r2->rating;
}

bool compare_by_rating_down(const sr &r1, const sr &r2) {
    return r1->rating > r2->rating;
}

bool compare_by_price_up(const sr &r1, const sr &r2) {
    return r1->price < r2->price;
}

bool compare_by_price_down(const sr &r1, const sr &r2) {
    return r1->price > r2->price;
}

