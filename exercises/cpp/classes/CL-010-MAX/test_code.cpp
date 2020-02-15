#include <iostream>
#include <cstdio>
#include "maxseq.hpp"
#include <cerrno>

using std::cout;
using std::endl;
using std::boolalpha;

bool test_first_value_max();
bool test_last_value_max();
bool test_random_values();
/*
bool test_no_values();
*/
int main(){
    cout << std::boolalpha << "1 test (first value max): " <<  test_first_value_max() << endl;
    cout << "2 test (last value max): " << test_last_value_max() << endl;
    cout << "3 test (many rand values): " << test_random_values() << endl;
//  cout << "4 test (no values): " << test_no_values() << endl;
    cout << "testing completed" << endl;
    return 0;
}

bool test_first_value_max(){
    MaxSeq max;
    max.add(50);
    max.add(10);
    max.add(29);

    return (max.count() == 3) && (max.max() == 50);
}

bool test_last_value_max(){
    MaxSeq max;
    for (int i = 0; i < 10; i++)
    {
        max.add(i);
    }
    return (max.count() == 10) && (max.max() == 9);
}

bool test_random_values(){
    MaxSeq max;
    max.add(1000);
    max.add(10);
    max.add(-15);
    max.add(-10000);
    max.add(1001);
    max.add(10);

    return (max.count() == 6) && (max.max() == 1001);
}

/*
bool test_no_values(){
    MaxSeq max;
    max.max();
    return (errno == 0);
}
*/
