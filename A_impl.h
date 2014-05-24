#ifndef A_H
#define A_H

#include "A_decl.h"
#include "Repository_decl.h"

void A::setup(Repository* repo)
{
    repo->base->foo();
}

void A::foo()
{

}

#endif // A_H
