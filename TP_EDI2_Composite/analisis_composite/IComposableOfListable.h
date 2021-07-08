#ifndef ICOMPOSABLEOFLISTABLE_H_INCLUDED
#define ICOMPOSABLEOFLISTABLE_H_INCLUDED
#include <iostream>
// #include <IListable.h>/*/
#include "./IListable.h"

class IComposableOfListable
{
    public:
        virtual ~IComposableOfListable(){};
        virtual void add(IListable* component) = 0;
        virtual void remove(IListable* component) = 0;
};




#endif // ICOMPOSABLEOFLISTABLE_H_INCLUDED
