#include <iostream>
#include <string>
#include "textfilereader.hpp"

using std::cout;
using std::endl;
using std::boolalpha;

void Constructor_test();

void Get_test(TextFileReader & f);
void Has_next_test(TextFileReader & f);
void Last_has_next_test(TextFileReader & f);

void Empty_file_test(TextFileReader & f);


int main(){
    cout << "Start tests." << endl;
    cout << "------------" << endl;
    try
    {
        Constructor_test();
        cout << "Constructor test completed succesfully." << endl;
        TextFileReader f ("test_1.txt");
        Has_next_test(f);
        cout << "'hasNext' test (not eof) completed succesfully." << endl;
        Get_test(f);
        cout << "'Get' test completed succesfully." << endl;
        Last_has_next_test(f);
        cout << "'hasNext' test (eof) completed succesfully." << endl;
        TextFileReader f_2 ("test_3.txt");
        
        Empty_file_test(f_2);
        cout << "'Empty file' test completed succesfully." << endl;
        cout << "------------" << endl;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(...)
    {
        cout << "Unexpected error.\n";
    }
    
    return 0;
}

void Constructor_test()
{
    TextFileReader x("test_2.txt");
}

void Get_test(TextFileReader & f)
{
    if (f.get() != "1_line")
    {
        throw std::logic_error("Wrong read from file");
    }
    f.get();
    if (f.get() != "3_line")
    {
        throw std::logic_error("Wrong read from file");
    }
    f.get();
}

void Has_next_test(TextFileReader & f)
{
    if (f.hasNext() == false)
    {
        throw std::logic_error("Wrong check for EOF");
    }
    
}

void Last_has_next_test(TextFileReader & f)
{
    if (f.hasNext() == true)
    {
        throw std::logic_error("Wrong check for EOF");
    }
    
}

void Empty_file_test(TextFileReader & f)
{
    cout << f.get();
    if (f.hasNext() != false)
    {
        throw std::logic_error("Wrong check for EOF");
    } 
}

