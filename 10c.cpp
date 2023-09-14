#include <iostream>
#include <cstdlib> 
// Need for the exit function
using namespace std;
void Function(); 
// Function prototype
int main()
{    
    Function();    
    return 0;
}
void Function()
{    
    cout << "This program terminates with the exit function.\n";    
    cout << "Bye!\n";    
    exit(0);    
    cout << "This message will never be displayed\n";    
    cout << "because the program has already terminated.\n";
}