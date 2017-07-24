/*A customer in a store is purchasing five items. The prices of the five items are
Price of item 1 = $15.95    Price of item 2 = $24.95    Price of item 3 = $6.95 
Price of item 4 = $12.95    Price of item 5 = $3.95
Write a program that holds the prices of the five items in five variables. Display each item’s price, 
the subtotal of the sale, the amount of sales tax, and the total. Assume the sales tax is 11.5%. */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
        system("clear");
    double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, tax = 11.5, subtotal, total_tax, total;
    subtotal = item1 + item2 + item3 + item4 + item5;
    total_tax = (subtotal/100) * tax;
    total = subtotal + total_tax;
    cout << "\n\t***********Total Purchase*************" << endl;
    cout << "\tThe cost of item 1: " << setw(13) << "$" << item1 << endl;
    cout << "\tThe cost of item 2: " << setw(13) << "$" << item2 << endl;
    cout << "\tThe cost of item 3: " << setw(13) << "$" << item3 << endl;
    cout << "\tThe cost of item 4: " << setw(13) << "$" << item4 << endl;
    cout << "\tThe cost of item 5: " << setw(13) << "$" << item5 << endl;
    cout << "\tThe subtotal of the sale is : " << setw(3) << "$" << subtotal << endl;
    cout << fixed<< setprecision(2)<< "\tThe amount of sale tax is: " << setw(6) << "$" << total_tax << endl;
    cout << "\tThe total of the order is: "<< setw(6) << "$" << total << endl << endl;
    return 0;
}