#ifndef UNIT
#define UNIT
class MaxSeq
{
    int max_n;
    size_t count_n;
public:
    MaxSeq();
    void add(int n);
    int max();
    size_t count();
};

#endif
