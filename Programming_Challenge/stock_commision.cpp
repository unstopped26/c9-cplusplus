#include <iostream>
using namespace std;

int main()
{
        double stock = 750, cost = 35, com = 0.02, total_c, total_s;
        total_c = stock*cost *com;
        total_s = stock*cost;
        cout << "\n\t*************Stock Commision************\n";
        cout << "\n\tThe amount of stock paid without commision is: " << total_s << endl;
        cout << "\n\tThe amount of commision is: " << total_c << endl;
        cout << "\n\tThe total amount paid is: " << total_c + total_s << endl;
        
        return 0;
    
}