#ifndef A_DECL_H
#define A_DECL_H

#include "Base.h"

class B;

struct A : Base
{
    virtual void foo() const override;
    void call_b(const B& b) const;
};

#endif // A_DECL_H
