#include <iostream>
#include <cstdio>
#include "intvector.hpp"

using std::cout;
using std::endl;
using std::boolalpha;

bool test_constr_def_const_length();

bool test_constr_transform_const_length();
bool test_constr_copy_const_length();
bool test_constr_transform_dynamic_length();

int main(){
    cout << std::boolalpha << "1 test (default constructor): " <<  test_constr_def_const_length() << endl;
    cout << "2 test (transform constructor): " << test_constr_transform_const_length() << endl;
    cout << "3 test (copy constructor): " << test_constr_copy_const_length() << endl;
    cout << "4 test (dynamic length): " << test_constr_transform_dynamic_length() << endl;
    cout << "testing completed" << endl;
    return 0;
}

bool test_constr_def_const_length(){
    IntVector vect;
    vect.set(5, 100);
    vect.set(2, -4);
    vect.set(0, 12);
    int count_error = 0;
    int check[10] = {12 ,0,  -4, 0, 0, 100, 0};
    for (int i = 0; i < 10; i++){
        if (vect.get(i) != check[i])
        {
            count_error++;
        }
    }
    return (count_error == 0);
}

bool test_constr_transform_const_length(){
    IntVector vect(4);
    vect.set(0, 0);
    vect.set(1, 1);
    vect.set(2, 2);
    vect.set(3, 100);
    vect.set(3, 3);
    int count_error = 0;
    int check[] = {0, 1, 2, 3};
    for (int i = 0; i < 4; i++){
        if (vect.get(i) != check[i])
        {
            count_error++;
        }
    }
    return (count_error == 0);
}

bool test_constr_copy_const_length(){
    IntVector tmp(4);
    tmp.set(0, 0);
    tmp.set(1, 1);
    tmp.set(2, 2);
    tmp.set(3, 100);
    tmp.set(3, 3);

    IntVector vect(tmp);
    vect.set(2, -400);
    vect.set(0, 222);
    int count_error = 0;
    int check[] = {222, 1,  -400, 3};
    for (int i = 0; i < 4; i++){
        if (vect.get(i) != check[i])
        {
            count_error++;
        }
    }
    return (count_error == 0);
}

bool test_constr_transform_dynamic_length(){
    IntVector vect(3);
    vect.set(1, 1);
    vect.set(2, 2);
    vect.set(5, 12);
    int count_error = 0;
    int check[] = { 0, 1,  2, 0, 0, 12};
    for (int i = 0; i < 6; i++){
        if (vect.get(i) != check[i])
        {
            count_error++;
        }
    }
    return (count_error == 0);
}

