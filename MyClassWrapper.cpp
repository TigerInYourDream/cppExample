#include "MyClassWrapper.h"
#include "myclass.hpp"

using namespace MyNamespace;

extern "C" {
    struct MyClassOpaque {
        MyClass* instance;
    };

    MyClassHandle MyClass_create() {
        MyClassOpaque* opaque = new MyClassOpaque;
        opaque->instance = new MyClass();
        return opaque;
    }

    void MyClass_destroy(MyClassHandle handle) {
        MyClassOpaque* opaque = static_cast<MyClassOpaque*>(handle);
        delete opaque->instance;
        delete opaque;
    }

    void MyClass_myMethod(MyClassHandle handle) {
        MyClassOpaque* opaque = static_cast<MyClassOpaque*>(handle);
        opaque->instance->myMethod();
    }
}
