#include <iostream>
#include "classes.cpp"

using namespace std;

void show(One&, Two&);

int main() {

    One oneInstance;
    Two twoInstance;

    show(oneInstance, twoInstance);
}

void show(One& a, Two& b) {

    cout << a.s1 << b.s2 << endl;
}
