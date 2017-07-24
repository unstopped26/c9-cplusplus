/*Write a do-while loop that asks the user to enter two numbers.
The numbers should be added and the sum displayed.
The user should be asked if he or she wishes to per- form the operation again.
If so, the loop should repeat; otherwise it should terminate.*/

#include <iostream>
using namespace std;

int main()
{
    int num[3],sum;
    char yes;
    do {
        cout << "Enter two numbers: ";
        cin >> num[1] >> num[2];
        sum = num[1] + num[2];
        cout << endl << sum << endl;
        cout << "You wishes to perform another operation Y/N : ";
        cin >> yes;
    } while( yes == 'y' || yes == 'Y');
    
    
    return 0;
}