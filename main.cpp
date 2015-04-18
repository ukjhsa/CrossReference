#include <iostream>

#include "A.h"
#include "B.h"

//struct Base
//{
//    virtual ~Base() {}
//    virtual void foo() const = 0;
//};
//
//class B;
//
//struct A : Base
//{
//    virtual void foo() const;
//    void call_b(const B& b) const;
//};
//
//struct B  : Base
//{
//    virtual void foo() const;
//    void call_a(const A& a) const;
//};
//
//void A::foo() const
//{
//    std::cout << "A" << std::endl;
//}
//
//void A::call_b(const B& b) const
//{
//    std::cout << "A call B: ";
//    b.foo();
//}
//
//void B::foo() const
//{
//    std::cout << "B" << std::endl;
//}
//
//void B::call_a(const A& a) const
//{
//    std::cout << "B call A: ";
//    a.foo();
//}


int main()
{
    A a;
    a.foo();
    B b;
    b.foo();
    a.call_b(b);
    b.call_a(a);
}
