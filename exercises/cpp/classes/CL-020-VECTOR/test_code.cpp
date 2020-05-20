#include <iostream>
#include <cstdio>
#include <string>
#include "intvector.hpp"

using std::cout;
using std::endl;

void Constructor_test();

void Copy_constructor_test(IntVector & vect);
void Set_test(IntVector & vect);

void Get_test(IntVector & vect);
void Range_test(IntVector & vect);


int main(){
    cout << "Start tests." << endl;
    cout << "------------" << endl;
    try
    {
        Constructor_test();
        cout << "Constructor test completed succesfully." << endl;
        IntVector vect(5);
        Copy_constructor_test(vect);
        cout << "Copy constructor test completed succesfully." << endl;
        Set_test(vect);
        cout << "'Set' test completed succesfully." << endl;
        Get_test(vect);
        cout << "'Get' test completed succesfully." << endl;
        Range_test(vect);
        cout << "'Range' test completed succesfully." << endl;
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
    IntVector x;
}

void Copy_constructor_test(IntVector & vect)
{
    IntVector x(vect);
}

void Set_test(IntVector & vect)
{
    vect.set(3, 100);
    vect.set(2, -4);
    vect.set(0, 12);
    vect.set(6, 1);
    
}

void Get_test(IntVector & vect)
{
    int check[7] = {12 ,0,  -4, 100, 0, 0, 1};
    for (int i = 0; i < 7; i++){
        if (vect.get(i) != check[i])
        {
            throw std::logic_error("Wrong values.");
        }
    }
}

void Range_test(IntVector & vect)
{
    try
    {
        vect.get(100);
    }
    catch(const std::out_of_range & e)                                                               
    {                                                                                               
        std::string err = "Try to get non-existent element";                                                
        if (e.what() != err)                                                                        
        {                                                                                           
            throw std::logic_error("Incorrectly behaviour when getting out-of-range element");  
        }                                                                                           
    }
    
}
