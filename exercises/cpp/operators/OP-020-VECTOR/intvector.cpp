#ifndef MOD
#define MOD
#include "intvector.hpp"
#include <cstdio>
#include <cerrno>
void IntVector::set(int i, int value){
    if (i > size)
    {   
        int *tmp = new int[i+1];
        for (int j = 0; j < size; j++)
        {
            tmp[j] = head[j];
        }
        for (int j = size; j < i + 1; j++)
        {
            tmp[j] = 0;
        }
        size = i + 1;
        int * del = head;
        head = tmp;
        delete [] del;
    }
    head[i] = value;
}

int IntVector::get(int i) const
{
    return head[i];
}

int & IntVector::operator [](int i)
{
    return head[i];
}
#endif
