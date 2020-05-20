#ifndef UNIT
#define UNIT
#include <fstream>
#include <iostream>
using std::ifstream;
using std::cout;
using std::endl;

class TextFileReader
{
    ifstream f;
    std::string str;
    bool flag;

public:
    TextFileReader(const char* path);
    
    ~TextFileReader();
    
    std::string get();   
    bool hasNext() const;
    
};
#endif
