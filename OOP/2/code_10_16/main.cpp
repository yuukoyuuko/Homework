#include <iostream>
#include "namespace2.h"

namespace Alias = MyNamespace;

void callWithScopeResolution() {
    Alias::function1();
}

void callWithUsingDirective() {
    using namespace MyNamespace;
    function2();
    function3();
}

int main() {
    callWithScopeResolution();
    std::cout << "----" << std::endl;
    callWithUsingDirective();
    return 0;
}

namespace MyNamespace {
    void function1() {
        std::cout << "Function 1 called!" << std::endl;
    }

    void function2() {
        std::cout << "Function 2 called!" << std::endl;
    }

    void function3() {
        std::cout << "Function 3 called!" << std::endl;
    }

    void function4() {
        std::cout << "Function 4 called!" << std::endl;
    }
}
