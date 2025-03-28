#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    MyClass(int v) {
        value = v;
    }
};

int main() {
    MyClass obj(10); 
    cout << "对象创建成功，值为：" << obj.value << endl;
    return 0;
}
