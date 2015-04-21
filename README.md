# Cross Reference

====================

### Problem

Cross reference by include each header.

For example, there are two classes A and B, A has a member function that accept B through the parameter and uses B inside the function. B is similar to A.

So A must be include B, and B must include A, this **cause** cross reference.

### Solution

Like directly written A and B in main.cpp, you can use some trick:

- forward declaration of B before class A.
- forward declaration of A before class B.

then implement them after each class declaration:

- the implementation of A include the class declaration of A and B.
- the implementation of B include the class declaration of A and B.

The last, include the implementation of A and B (**NOT** the class declaration) in main.cpp.

### Remark

If your project has the problem of cross reference,

- First, possibly use forward declaration instead of include file.
- Second, check the relation between classes in detail, the design of architecture may have something wrong.
- If not in the above, then use it.

For template class, its declaration and implementation can use this method to split.
