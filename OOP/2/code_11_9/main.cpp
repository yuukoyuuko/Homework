#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    void setValue(int v) {
        value = v;
        cout << "Value set to: " << value << endl;
    }

    int getValue() const {
        return value;
    }
};

void byValue(MyClass obj) {
    cout << "In byValue function: ";
    cout << "Value: " << obj.getValue() << endl;
    obj.setValue(20);
}

void byReference(MyClass& obj) {
    cout << "In byReference function: ";
    cout << "Value: " << obj.getValue() << endl;
    obj.setValue(30);
}

void byConstReference(const MyClass& obj) {
    cout << "In byConstReference function: ";
    cout << "Value: " << obj.getValue() << endl;
}

int main() {
    MyClass obj(10);

    byValue(obj);
    cout << "After byValue: ";
    cout << "Value in main: " << obj.getValue() << endl;

    byReference(obj);
    cout << "After byReference: ";
    cout << "Value in main: " << obj.getValue() << endl;

    byConstReference(obj);
    cout << "After byConstReference: ";
    cout << "Value in main: " << obj.getValue() << endl;

    return 0;
}
