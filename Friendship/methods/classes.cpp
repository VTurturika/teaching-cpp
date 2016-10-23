#include <iostream>
#include <string>

class Two;

class One {

    private:
        std::string s1;
    public:
        One() {
            s1 = "Testing: ";
        }

        void show(Two&);
};

class Two {
    friend void One::show(Two&);

    private:
        std::string s2;
    public:
        Two() {
            s2 = "one, two, three";
        }
};
