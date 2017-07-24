/*Write a nested loop that displays 10 rows of ‘#’ characters. There should be 15 ‘#’ characters in each row.*/

#include <iostream>
using namespace std;

int main()
{
    
    for(int row =0; row < 10; row++)
    {
        for(int ch = 0; ch < 15; ch++)
        {
            cout << "#";
        }
    cout << endl;    
    }
    
    return 0;
}