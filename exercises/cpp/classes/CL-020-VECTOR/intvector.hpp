#ifndef UNIT
#define UNIT


class IntVector
{
    int size;
    int * head;

public:
    IntVector(int length = 10){
        size = length;
        head = new int[size];
        for (int i = 0; i < size; i++){
            head[i] = 0;
        }
    }

    IntVector(const IntVector & x){
        size = x.size;
        head = new int[size];
        for (int i = 0; i < size; i++){
            head[i] = x.head[i];
        }
    }
    
    void set(int i, int value);
        
    int get(int i) const;

    ~IntVector(){
        delete [] head;
    }
};

#endif