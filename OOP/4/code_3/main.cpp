#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
    int gcd(int a, int b) const {
        return b == 0 ? a : gcd(b, a % b);
    }
    void simplify() {
        int g = gcd(numerator, denominator);
        numerator /= g;
        denominator /= g;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }
public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            cerr << "Error: Denominator cannot be zero!" << endl;
            exit(1);
        }
        simplify();
    }
    Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }
    operator double() const {
        return static_cast<double>(numerator) / denominator;
    }
    friend ostream& operator<<(ostream& os, const Fraction& f) {
        os << f.numerator << "/" << f.denominator;
        return os;
    }
};

int main() {
    Fraction R1(1, 2), R2(2, 3), R3;
    R3 = R1 + R2;
    double number = R3;
    cout << R3 << endl;
    cout << number << endl;
    return 0;
}
