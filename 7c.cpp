#include <iostream>
using namespace std;
void anotherFunction(); 
// Function prototype
int main()
{    
    int num = 1; 
    // Local variable    
    cout << "In main, num is " << num << endl;    
    anotherFunction();    
    cout << "Back in main, num is " << num << endl;    
    return 0;
}
void anotherFunction()
{    
    int num = 20; 
    // Local variable    
    cout << "In anotherFunction, num is " << num << endl;
}