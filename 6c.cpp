#include <iostream>
using namespace std;
// Function prototype
bool isEven(int);
int main()
{    
    int val;    
    // Get a number from the user.    
    cout << "Enter an integer and I will tell you ";    
    cout << "if it is even or odd: ";    
    cin >> val;
    // Indicate whether it is even or odd.    
    if (isEven(val))    \
    {        
        cout << val << " is even.\n";    
    }    
    else    
    {        
        cout << val << " is odd.\n";    
    }    
    return 0;
}
bool isEven(int number)
{    
    bool status;    
    if (number % 2 == 0)    
    {        
        status = true;    
    }    
    else    
    {        
        status = false;    
    }    
    return status;
}