// Singleton
// Ensure that a class has only one instance, and provides a global
// point of access to that object. Often used in Facade and Flyweight patterns.
// When to use:
// - there must be exactly one instance of a class and it must be accessible
//   to clients from a well-known access point. Examples: caches, thread pools,
//   registries, etc.
// - when the sole instance should be extensible by subclassing, and clients 
//   should be able to use an extended instance without modifying their code.

#include "singleton.h"

// 
// Singleton example
// Comprised of a static variable to hold one instance of the class and
// methods to allow instantiation of the class.
//

void Singleton::setValue(int val) {value_ = val;}
int  Singleton::getValue()        {return(value_);}

/*
 // Define the static Singleton pointer
 Singleton* Singleton::inst_ = NULL;

 Singleton* Singleton::getInstance() {
    if (inst_ == NULL) {
       inst_ = new Singleton();
    }
    return(inst_);
 }

 int main(int argc, const char * argv[]) {
     Singleton* p1 = Singleton::getInstance();

     p1->setValue(10);
      
     Singleton* p2 = Singleton::getInstance();

     cout << "Singleton Value = " << p1->getValue() << '\n';
     cout << "Singleton Value = " << p2->getValue() << '\n';
     p2->setValue(99);
     cout << "Singleton Value = " << p1->getValue() << '\n';
     cout << "Singleton Value = " << p2->getValue() << '\n';
     return 0;
 }
 And if you don’t want clients to deal with pointers, you can return a reference, too:
 Singleton& Singleton::getInstance() {
    if (inst_ == NULL) {
       inst_ = new Singleton();
    }
    return(*inst_);
 }
 */
