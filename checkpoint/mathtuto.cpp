/*This is a modification of Programming Challenge 17 from Chapter 3.
Write a program that can be used as a math tutor for a young student.
The program should display two random numbers that are to be added, such as:
247
129
The program should wait for the student to enter the answer.
If the answer is correct, a message of congratulations should be printed.
If the answer is incorrect, a message should be printed showing the correct answer.*/
#include <iostream>
#include <cstdlib> //For rand and srand
#include <ctime>  //For the time function

using namespace std;

int main()
{
 const int MIN_VALUE = 1;   //Minimum Number
 const int MAX_VALUE = 100; //Maximun number
 unsigned seed = time(0);
 
 
 srand(seed);
 int num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
 int num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
 int result = num1 + num2;
 
 
 srand(seed);
 cout << "  " << num1 << endl;
 cout << "+ " << num2 << endl;
 cout << "-----" << endl;
 int answer;
 cout << "  ";
 cin >> answer;
 
    if(result == answer){
        cout << "Congratulation";
    }
    else {
         cout << "Wrong. The result is " << result << endl;
    }
    return 0;
}
