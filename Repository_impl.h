#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "Repository_decl.h"
#include "A_decl.h"

void Repository::repo_foo()
{
    base = new A();
    base->setup(this);
}

#endif // REPOSITORY_H
