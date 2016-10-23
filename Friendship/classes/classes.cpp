#include <iostream>

class A {
    friend class B;

    private:
        int value;
    public:
        A() {
            value = 0;
        }
};

class B {

    private:
        A aInstance;
    public:
        void action() {
            std::cout << aInstance.value << std::endl;
        }
};
