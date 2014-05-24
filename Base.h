#ifndef Base_h
#define Base_h

class Repository;

struct Base
{
    virtual void setup(Repository* repo) = 0;
    virtual void foo() = 0;
};

#endif // Base_h
