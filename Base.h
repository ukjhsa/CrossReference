#ifndef BASE_h
#define BASE_h

struct Base
{
    virtual ~Base() {}
    virtual void foo() const = 0;
};

#endif // BASE_h
