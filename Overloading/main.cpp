#include <iostream>
#include "classes.cpp"

using namespace std;

int main() {

    Int x = Int(1);
    Int y = Int(2);

    Int z = x + y;

    cout << z.getValue() << endl;

    z = x * y;

    cout << z.getValue() << endl;
}
