#ifndef MYCLASS
#define MYCLASS

#include <emscripten/bind.h>
#include <string>

using namespace emscripten ;

class MyClass {
public:
  MyClass(int x, const std::string& y) ;
  void incrementX() ;
  int  getX() const ;
  void setX(int) ;
  static const std::string& getStringFromInstance(const MyClass&) ;
  
private:
  int x_ ;
  std::string y_ ;
} ;

#endif
