#ifndef A_DECL_H
#define A_DECL_H

#include "Base.h"

class Repository;

struct A : Base
{
    void setup(Repository* repo);
    void foo();
};

#endif // A_DECL_H
