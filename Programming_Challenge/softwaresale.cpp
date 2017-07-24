/*A software company sells a package that retails for $99. Quantity discounts are given according to the following table.
Quantity Discount
10–19 20% 
20–49 30% 
50–99 40% 
100 or more 50%
Write a program that asks for the number of units sold and computes the total cost of the purchase.
Input Validation: Make sure the number of units is greater than 0.*/


#include <iostream>
using namespace std;

int main()
{
    
    double qu, max19 = 20, max49 = 30, max99 = 40, max100 = 50, total, price = 100;
    do{
        cout << "How many software are you bying: ";
        cin >> qu;
    } while(qu <= 0);
        price *= qu;
    if (10 <= qu && qu <=19){
        total = (price/100)*max19;
        price -= total;
        cout << "Your Total is $" << price << endl;
    
    } else  if (20 <= qu && qu <=49){
        total = (price/100)*max49;
        price -= total;
        cout << "Your Total is $" << price << endl;
    } else  if (50 <= qu && qu <=99){
        total = (price/100)*max99;
        price -= total;
        cout << "Your Total is $" << price << endl;
    } else  if (qu >= 100){
        total = (price/100)*max100;
        price -= total;
        cout << "Your Total is $" << price << endl;
    } else {
        
        cout << "Your Total is $" << price << endl;
    }
    
    return 0;
}