#include <iostream>

using namespace std;

int main()
{
    
    double sale = 0.0, total;
    int days = 0;
    cout << "For how many day is the sale";
    cin >> days;

    
    for (int count = 1; count <= days ; count++){
        
        cout << "Enter the sales for day " << count << " :";
        cin >> sale;
        total += sale;
        
    }
    cout << "The total sale is : " << total <<endl;
    
    return 0;
}