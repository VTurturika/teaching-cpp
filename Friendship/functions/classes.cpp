#include <iostream>
#include <string>

class Two;

class One {
    friend void show(One&, Two&);

    private:
        std::string s1;
    public:
        One() {
            s1 = "Testing: ";
        }
};

class Two {

    friend void show(One&, Two&);

    private:
        std::string s2;
    public:
        Two() {
            s2 = "one, two, three";
        }
};
