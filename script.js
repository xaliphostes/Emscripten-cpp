const Module = require('./example') ;

var instance = new Module.MyClass(10, "hello") ;

instance.incrementX();
instance.x; // 11
instance.x = 20; // 20

var s = Module.MyClass.getStringFromInstance(instance); // "hello"
console.log(s) ;
console.log(instance.x) ;

instance.delete() ;