#include "std_lib_facilities.h"

using namespace std;

//Chapter 4 Try This, Page 116
//Create a square number function without using the '*' operator.
//In other words, use repeated addition to find the square of any number.

int square(int x)
{
    int y = 0;
    
    for(int i = 0; i < x; ++i)
        y += x;
    
    return y; 
}

int main()
{
    cout << square(6) << '\n';
    
    return 0;
}

