//#include "Repository_decl.h"
#include "Repository_impl.h"
//#include "A_decl.h"
#include "A_impl.h"

//class Repository;
//
//struct Base
//{
//    virtual void setup(Repository* repo) = 0;
//};
//struct A : Base
//{
//    void setup(Repository* repo);
//};

//struct Repository
//{
//    Base *base;
//    void repo_foo();
//};

//void Repository::repo_foo()
//{
//    base = new A();
//    base->setup(this);
//}

//void A::setup(Repository* repo)
//{
//    Base *b = repo->base;
//}

int main()
{
    Repository repo;
    repo.repo_foo();
}
