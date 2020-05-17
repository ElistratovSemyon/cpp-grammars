#include <iostream>
#include "maxseq.hpp"
#include <string>

using std::cout;
using std::endl;

void Empty_test(MaxSeq & max);
void Constructor_test();
void Add_test(MaxSeq & max);
void Count_test(MaxSeq & max);
void Max_test(MaxSeq & max);


int main(){
    cout << "Start tests." << endl;
    cout << "------------" << endl;
    try
    {
        Constructor_test();
        cout << "Constructor test completed succesfully." << endl;
        MaxSeq max;
        Add_test(max);
        cout << "'Add' test completed succesfully." << endl;
        Max_test(max);
        cout << "'Max test' completed succesfully." << endl;
        Count_test(max);
        cout << "'Count' test completed succesfully." << endl;
        MaxSeq new_max;
        Empty_test(new_max);
        cout << "'Empty sequence' test completed succesfully." << endl;
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
    MaxSeq max;
}

void Add_test(MaxSeq & max)
{
    for (int i = 0; i < 10; i++)
    {
        max.add(i);
    } 
    max.add(1000);
    max.add(10);
    max.add(-15);
    max.add(-10000);
    max.add(1001);
    max.add(10);
} 

                                                                                                
                                                                                                    
void Max_test(MaxSeq & max)
{                                                                                                                                                             
    if (max.max() != 1001)
    {
        throw std::logic_error("Incorrectly computing max");
    }                                                                                                                                           
}       

void Count_test(MaxSeq & max)
{                                                                                                                                                     
    if (max.count() != 16)
    {
        throw std::logic_error("Incorrectly computing count");
    }                                                                                                                                           
} 

void Empty_test(MaxSeq & max)
{
    try
    {
        max.max();
    }
    catch(const std::logic_error & e)
    {
        std::string err = "No elements in sequence";
        if (e.what() != err)
        {
            throw std::logic_error("Incorrectly behaviour when computing count from empty array");
        }
    }

}
