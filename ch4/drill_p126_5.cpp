#include "std_lib_facilities.h"

using namespace std;

//Chapter 4 drill pg.126 step 5:
//After writing out which value is smaller and larger, change - 
//the program so that it writes out "the numbers are almost equal" - 
//if they are within .01 of eachother.

int main()
{
    double first;
    double second;
    char quit = '|';

    cout << "Enter two integers. Enter '|' to exit  \n";

    while(cin >> first >> second) {
        if(first == quit)
            break;     
        else if(second == quit)
            break;

        if(first < second)
            cout << "The smaller value is: " << first
                 << ", and the larger value is: " << second << '\n';
        else if(first > second)
            cout << "The larger value is: " << first
                 << ", and the smaller value is: " << second << '\n';
        else if(first == second)
            cout << "The numbers: " << first << " and " << second << " are equal" << '\n';

        if(first - second  >= -.01 && first - second <= .01 && first - second != 0)
            cout << "The numbers: " << first << " & " << second << " are almost equal\n";
    }
 
	return 0;
}

