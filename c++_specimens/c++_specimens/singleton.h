#ifndef SINGLETON_HPP
#define SINGLETON_HPP

////////////////////////////////////////////////////////////////////////
//  singleton.hpp
//
// generic singleton 
//
// a) initialize before first use.
// b) non thread-safe for simplicity
//
// Better implementations are 
// https://www.boost.org/doc/libs/1_65_1/boost/serialization/singleton.hpp
//
#include <iostream>
using namespace std;

class Singleton {
public:
   // This is how clients can access the single instance
   static Singleton* getInstance();

    void setValue(int );
    int  getValue(void);

    // Protect the Singleton by defining the copy contructor and assignment
    // operator as deleted. This is less problematic than declaring the
    // constructor and the operator as private.
    Singleton( Singleton const& ) = delete;
    Singleton& operator=( Singleton const& ) = delete;
    
protected:
   int value_;

private:
   static Singleton* inst_;   // The one, single instance
   Singleton() : value_(0) {} // private constructor
   //Singleton(const Singleton&);
   //Singleton& operator=(const Singleton&);
};
#endif //SINGLETON_HPP
