#ifndef COUNTED_H
#define COUNTED_H

#include <iostream>
using namespace std;

class Counted {
private:
    static int count;
    int id;

public:
    Counted() {
        id = ++count;
        cout << "构造 Counted 对象 #" << id << endl;
    }

    ~Counted() {
        cout << "析构 Counted 对象 #" << id << endl;
    }
};

#endif
