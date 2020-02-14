#ifndef MODULE
#define MODULE
#include "maxseq.hpp"
#include <cerrno>
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
            perror("No values");
            return 0;
        }
        return max_n;
    }
    size_t MaxSeq::count()
    {
        return count_n;
    }
#endif
