#ifndef B_H
#define B_H

#include "B_decl.h"
#include "A_decl.h"

void B::foo() const
{
    std::cout << "B" << std::endl;
}

void B::call_a(const A& a) const
{
    std::cout << "B call A: ";
    a.foo();
}

#endif // B_H
