#include <iostream>
using namespace std;

class MyClass {
private:
    static const int size = 5; 
    int arr[size];        
    const int id;           
    static int staticVar; 

public:
    MyClass(int val) : id(val) {
        for (int i = 0; i < size; ++i) {
            arr[i] = i + 1; 
        }
        staticVar = 10; 
    }

    static void printStaticVar() {
        cout << "Static variable value: " << staticVar << endl;
    }

    inline void print() {
        cout << "Array values: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;

        printStaticVar();
    }
};

int MyClass::staticVar = 0;

int main() {
    MyClass obj(100);  
    obj.print();
    return 0;
}
