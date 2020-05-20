#ifndef UNIT
#define UNIT


class IntVector
{
    int size;
    int * head;

public:
    IntVector(int length = 10);

    IntVector(const IntVector & x);
    
    void set(int i, int value);
        
    int get(int i) const;

    ~IntVector();
};

#endif
