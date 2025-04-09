#include<iostream>
#include"number.h"
using namespace std;

int main() {
    Number a(10.5), b(2.0), c;

    c = a + b * Number(3.0) - Number(1.5);
    c.print(); 

    int intVal = c;  
    cout << "intVal: " << intVal << endl;

    return 0;
}
