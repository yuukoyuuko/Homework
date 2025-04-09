#include "Counted.h"
#include<iostream>
using namespace std;
int Counted::count = 0;

int main() {
    cout << "--- 使用 new 创建单个对象 ---" << endl;
    Counted* p = new Counted();
    cout << "--- 使用 delete 销毁单个对象 ---" << endl;
    delete p;

    cout << "\n--- 使用 new[] 创建对象数组 ---" << endl;
    Counted* arr = new Counted[3];
    cout << "--- 使用 delete[] 销毁对象数组 ---" << endl;
    delete[] arr;

    return 0;
}
