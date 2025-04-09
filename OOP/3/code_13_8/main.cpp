#include "Counted.h"
#include <iostream>
using namespace std;
int Counted::count = 0;

int main() {
    cout << "--- 使用 new[] 创建对象数组 ---" << endl;
    Counted* arr = new Counted[3];

    cout << "--- 错误地使用 delete 而不是 delete[] ---" << endl;
    delete arr; 

    return 0;
}
