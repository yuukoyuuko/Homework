#include <iostream>
using namespace std;

class A {
public:
    A()  { cout << "A constructor" << endl; }
    ~A() { cout << "A destructor"  << endl; }
};

class B : public A {
public:
    B()  { cout << "B constructor" << endl; }
    ~B() { cout << "B destructor"  << endl; }
};

class C {
public:
    C()  { cout << "C constructor" << endl; }
    ~C() { cout << "C destructor"  << endl; }
};

class D : public B {
private:
    C c_member;  

public:
    D()  { cout << "D constructor" << endl; }
    ~D() { cout << "D destructor"  << endl; }
};

int main() {
    cout << "=== Entering main ===" << endl;
    D d;
    cout << "=== Exiting main ===" << endl;
    return 0;
}
