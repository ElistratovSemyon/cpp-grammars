#ifndef MOD
#define MOD
#include "textfilereader.hpp"

TextFileReader::TextFileReader(const char * path)
{
    f.open(path);
    if (getline(f, str))
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
}

TextFileReader::~TextFileReader()
{
    f.close();
}

std::string TextFileReader::get()
{
    std::string tmp = str;
    if (getline(f, str))
    {
        return tmp;
    }
    else
    {
        flag = false;
        return tmp;
    }
}

bool TextFileReader::hasNext() const
{
    return flag;    
}

#endif
