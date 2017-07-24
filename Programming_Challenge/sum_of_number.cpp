/*
Write a program that asks the user for a positive integer value. The program should use
a loop to get the sum of all the integers from 1 up to the number entered. For example,
if the user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50.
*/
#include <iostream>

using namespace std;

int main()
{
    int number,sum;
    
    cout << "Enter a Number: ";
    cin >> number;
    
        for(int i =1; i<= number; i++){
            
        sum = i + number;
        cout << "The sum of "<< i << " + " << number << " is " << sum << endl;
        }  
        
  }
