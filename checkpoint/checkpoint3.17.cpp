/* Display the number 34.789 in a field of nine spaces with two decimal places
of precision.
    Display the number 7.0 in a field of five spaces with three decimal places of
precision.  The decimal point and any trailing zeroes should be displayed.
    Display the number 5.789e+12 in fixed point notation.
    Display the number 67 left justified in a field of seven spaces.
*/

#include <iostream>
#include <iomanip>

using namespace std;


int main ()
{
    
    cout <<setw(9) <<setprecision(2)<< fixed << 34.789<< endl;
    cout <<setw(5) <<setprecision(3) << showpoint << 7.0 << endl;
    cout << fixed << 5.789e+12 << endl;
    cout << left << setw(7) << 67 << endl;
    return 0;
}
