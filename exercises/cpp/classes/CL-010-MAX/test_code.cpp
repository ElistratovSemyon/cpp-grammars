#include <iostream>
#include "maxseq.hpp"
#include <string>

using std::cout;
using std::endl;

void Empty_test();
void Constructor_test();
void Add_test();
void Count_test();
void Max_test();


int main(){
    cout << "Start tests." << endl;
    cout << "------------" << endl;
    try
    {
        Constructor_test();
        cout << "Constructor test completed succesfully." << endl;
        Add_test();
        cout << "'Add' test completed succesfully." << endl;
        Max_test();
        cout << "'Max test' completed succesfully." << endl;
        Count_test();
        cout << "'Count' test completed succesfully." << endl;
        Empty_test();
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

void Add_test()
{                                                                         
    MaxSeq max;                                                                                     
    for (int i = 0; i < 10; i++)                                                                    
    {                                                                                               
        max.add(i);                                                                                 
    }                                                                                               
} 

                                                                                                
                                                                                                    
void Max_test()
{                                                                          
    MaxSeq max;                                                                                     
    max.add(1000);                                                                                  
    max.add(10);                                                                                    
    max.add(-15);                                                                                   
    max.add(-10000);                                                                                
    max.add(1001);                                                                                  
    max.add(10);                                                                                    
    if (max.max() != 1001)
    {
        throw std::logic_error("Incorrectly computing max");
    }                                                                                                                                           
}       

void Count_test()
{                                                                          
    MaxSeq max;                                                                                     
    max.add(10);                                                                                  
    max.add(20);                                                                                    
    max.add(3);                                                                                   
    max.add(4);                                                                                
                                                                                      
    if (max.count() != 4)
    {
        throw std::logic_error("Incorrectly computing count");
    }                                                                                                                                           
} 

void Empty_test()
{
    MaxSeq max;
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
