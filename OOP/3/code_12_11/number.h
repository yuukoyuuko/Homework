#include <iostream>
using namespace std;

class Number {
private:
    double value;

public:
    Number(double v = 0.0) : value(v) {}

    Number& operator=(const Number& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    Number operator+(const Number& other) const {
        return Number(this->value + other.value);
    }

    Number operator-(const Number& other) const {
        return Number(this->value - other.value);
    }

    Number operator*(const Number& other) const {
        return Number(this->value * other.value);
    }

    Number operator/(const Number& other) const {
        if (other.value != 0)
            return Number(this->value / other.value);
        else {
            cerr << "除以零错误！" << endl;
            return Number(0);
        }
    }

    operator int() const {
        return static_cast<int>(value);
    }

    void print() const {
        cout << value << endl;
    }
};
