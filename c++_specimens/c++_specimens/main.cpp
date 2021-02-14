//
//  main.cpp
//  c++_specimens
//
//  Created by flitbip on 12/17/20.
//

#include <iostream>
#include "singleton.h"
#include "stopwatch.h"

using std::cout;
using std::endl;

void timer_test();

// Define the static Singleton pointer
Singleton* Singleton::inst_ = NULL;

Singleton* Singleton::getInstance() {
   if (inst_ == NULL) {
      inst_ = new Singleton();
   }
   return(inst_);
}

double square(double d) { return d*d; }

constexpr double ntimes(double d, int n)   // assume 0 <= n
{
        double m = 1;
        while (n--) m *= d;
        return m;
}

int main(int argc, const char * argv[]) {
    // here are some unused initialization features
    auto v1 = 1'000'000'000'000; //separators new in C++14
    auto v2 = 0xFF; //255
    auto v3 = 0b11111111; //255
    auto v4 = 3L;
    auto d1 = 2.2;
    auto i1 = static_cast<int>(d1); //intentionally throw away the fractional portion
    char c1 = 'B';
    auto c2 = "A";
    
    static double s1 = square(2);    // old-style: dynamic initialization
    constexpr double s2 {ntimes(2, 3)};  // modern-style: compile-time initialization

    cout << "s1= " << s1 << endl;
    cout << "s2= " << s2 << endl;
    
    cout << "Hello, World!\n";
    

    timer_test();
    
    if (v2 != v3)
    {
        cout << "It looks like C++14 is not supported\n";
        
        cout << "v1= " << v1 << endl;
        cout << "v2= " << v2 << endl;
        cout << "v3= " << v3 << endl;
        cout << "v4= " << v4 << endl;
        cout << "d1= " << d1 << endl;
        cout << "i1= " << i1 << endl;
        cout << "c1= " << c1 << endl;
        cout << "c2= " << c2 << endl;
    }

    Singleton* p1 = Singleton::getInstance();

    p1->setValue(10);
     
    Singleton* p2 = Singleton::getInstance();

    cout << "Singleton Value1 = " << p1->getValue() << '\n';
    cout << "Singleton Value2 = " << p2->getValue() << '\n';
    p2->setValue(99);
    cout << "Singleton Value1 = " << p1->getValue() << '\n';
    cout << "Singleton Value2 = " << p2->getValue() << '\n';
    return 0;
}
