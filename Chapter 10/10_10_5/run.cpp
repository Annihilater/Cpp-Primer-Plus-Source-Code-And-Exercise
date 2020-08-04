//
// Created by klause on 2020/7/31.
//

#include <iostream>
#include "stack.h"

int main() {
    using namespace std;
    Stack st;
    customer c1 = {"name1", 1};
    customer c2 = {"name2", 2};
    customer c3 = {"name3", 3};

    st.is_empty();
    st.is_full();

    st.push(c1);
    st.show_sum();

    st.push(c2);
    st.show_sum();

    st.push(c3);
    st.show_sum();

    st.pop(c1);
    st.show_sum();

    st.pop(c2);
    st.show_sum();

    st.pop(c3);
    st.show_sum();

    return 0;
}
