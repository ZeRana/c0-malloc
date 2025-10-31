# c0-malloc

C0 is a memory-safe variant of C.
This language is primarly used for the CMU CS course 15-122 to teach students C in a safe enviroment, before transitioning to using C.
C0 uses alloc or alloc_array to allocate memory.
All allocated memory starts as all zeros (ie calloc'ed).
alloc and alloc_array do not return NULL.
If they are out of memory the program just crashes.
There is a garbage collecter that runs in the background at run time. 
This prevents use after free errors, NULL pointer derefrancing errors, and all of the very fun memory leaking the C does.

C0 does not support a lot of features that C has, such as the preprocessor or global variables.
Additonally there are no function pointers or generic pointers (they are however avalible in c1).
