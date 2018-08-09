#include "myclass.h"

EMSCRIPTEN_BINDINGS(my_class_example) {

    class_<MyClass>("MyClass")
        .constructor<int, const std::string&>()
        .function("incrementX", &MyClass::incrementX)
        .property("x", &MyClass::getX, &MyClass::setX)
        .class_function("getStringFromInstance", &MyClass::getStringFromInstance) ;


}
