#include <iostream>
using namespace std;
void first();
void second();
int main()
{    
    cout << "I am starting in function main.\n";     
    first(); // Call function first    
    second(); //Call function second     
    cout << "Back in function main again.\n";    

    return 0;
}     
void first()
{   
    cout << "I am now inside the function first.\n";
}
void second()
{
    cout << "I am now inside the function second.\n";
}