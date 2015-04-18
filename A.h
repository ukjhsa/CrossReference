#ifndef A_H
#define A_H

#include "A_decl.h"
#include "B_decl.h"

void A::foo() const
{
    std::cout << "A" << std::endl;
}

void A::call_b(const B& b) const
{
    std::cout << "A call B: ";
    b.foo();
}

#endif // A_H
