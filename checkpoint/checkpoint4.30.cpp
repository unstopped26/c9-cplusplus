#include <iostream> 
using namespace std;

int main()
{
int userNum;
cout << "Enter one of the numbers 1, 2, or 3: ";
cin >> userNum;
//
// Write the switch statement here.
//

switch (userNum)
{
    case 1: cout << "one";
            break;
    case 2: cout <<  "Two";
            break;
    case 3: cout << "Three";
            break;
    default: cout << "error";
            
}
return 0;
}