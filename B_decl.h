#ifndef B_DECL_H
#define B_DECL_H

#include "Base.h"

class A;

struct B : Base
{
    virtual void foo() const override;
    void call_a(const A& a) const;
};

#endif // B_DECL_H
