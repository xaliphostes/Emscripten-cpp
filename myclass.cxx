#include "myclass.h"

MyClass::MyClass(int x, const std::string& y): x_(x), y_(y) {
}

void MyClass::incrementX() {
  ++x_ ;
}

int MyClass::getX() const {
  return x_ ;
}

void MyClass::setX(int x) {
  x_ = x ;
}

const std::string& MyClass::getStringFromInstance(const MyClass& instance) {
  return instance.y_ ;
}
