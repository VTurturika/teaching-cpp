#include <iostream>
#include "classes.cpp"

using namespace std;

int main() {

    One oneInstance;
    Two twoInstance;

    oneInstance.show(twoInstance);
}

void One::show(Two& b)  {
    cout << s1 << b.s2 << endl;
}
