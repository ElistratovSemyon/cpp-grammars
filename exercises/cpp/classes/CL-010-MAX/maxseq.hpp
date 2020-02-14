#ifndef UNIT
#define UNIT
#include <cstdio>
class MaxSeq
{
    int max_n;
    size_t count_n;
public:
    MaxSeq(){
        max_n = 0;
        count_n = 0;
    }
    void add(int n);
    int max();
    size_t count();
};

#endif
