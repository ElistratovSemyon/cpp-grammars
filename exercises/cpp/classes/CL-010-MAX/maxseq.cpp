#ifndef MODULE
#define MODULE
#include <iostream>
#include "maxseq.hpp"


MaxSeq::MaxSeq()
{ 
    max_n = 0;
    count_n = 0;
}

void MaxSeq::add(int n)
{
    if (count_n == 0)
    {
        max_n = n;
        
    }
    else
    {
        if (max_n < n)
        {
            max_n = n;
        }
    }
    count_n++;
}

int MaxSeq::max()
{
    if (count_n == 0)
    {
        throw std::logic_error("No elements in sequence");
    }
    return max_n;
}
size_t MaxSeq::count()
{
    return count_n;
}
#endif
