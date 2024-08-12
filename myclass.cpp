#include <ctime>
#include <iostream>

using namespace std;

namespace MyNamespace {
    class MyClass {
    public:
        MyClass();
        ~MyClass();
        void myMethod();
    };
}

MyNamespace::MyClass::MyClass() {
    cout << "Constructor called" << endl;
}

MyNamespace::MyClass::~MyClass() {
    cout << "Destructor called" << endl;
}

void MyNamespace::MyClass::myMethod() {
    cout << "myMethod called" << endl;
}

// int main() {
//     MyNamespace::MyClass obj;
//     obj.myMethod();
//     return 0;
// }
