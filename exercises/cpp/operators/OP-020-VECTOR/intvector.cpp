#ifndef MOD
#define MOD
#include "intvector.hpp"
#include <iostream>

IntVector::IntVector(int length)
{
    size = length;
    head = new int[size];
    for (int i = 0; i < size; i++){
        head[i] = 0;
    }
}

IntVector::IntVector(const IntVector & x)
{
    size = x.size;
    head = new int[size];
    for (int i = 0; i < size; i++){
        head[i] = x.head[i];
    }
}

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
    if (i > size)
    {
        throw std::out_of_range("Try to get non-existent element");
    }
    return head[i];
}

int & IntVector::operator [](int i)
{
    if (i >= size)
    {
        // expanding the vector, the resulting value is 0
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
    return head[i];
}

IntVector::~IntVector()
{
    delete [] head;
}


#endif
