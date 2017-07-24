#include <iostream>
using namespace std;

int main()
{
    
    int testVal = 0;
    
while (testVal++ < 10)
{
    if (testVal == 4) 
    continue;
    cout << testVal << " "; 
    
}
}