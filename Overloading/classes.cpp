class Int {

private:
    int value;
public:
    Int(int value) {
        this->value = value;
    }

    int getValue() {
        return value;
    }

    Int operator+(Int& y) {
        return Int(this->getValue() + y.getValue());
    }
};
