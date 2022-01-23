/*
 * Author: Mykola Omelchenko
 * Email: mmomelchen42@tntech.edu
 * 
 * The purpose of this program is to perform a set of standard
 * math fuctions for a given positive number.
 * 
 * Last edited on <10/22/2021>
 */ 

#include <iostream>
#include "utils.h"
using namespace std;

// Driver code
int main()
{
    int UsersInput1 = 1;
    unsigned int UsersInput = 1; 
    cout << "\nWelcome to the Standard Math Program.\nGiven a positive number (n), the program can compute:";
    cout << "\n- Sum from 1 to n\n- Factorial of n\n- Display the times table of n\n- Checks whether n is even or odd\n- Checks whether or not n is a prime n\n- Checks whether or not n is an Armstrong number";
    while (UsersInput1 != 0)
    {
        cout << "\nPlease enter a positive number (0 to terminate the program): ";
        cin >> UsersInput1;
        if (UsersInput1 < 0)
        {
            cout << "Sorry, no negative numbers please.";
        }
        
        else if(UsersInput1 > 0)
        {
            UsersInput = UsersInput1;
            Sum(UsersInput);
            Factorial(UsersInput);
            TimesTable(UsersInput);
            IsEven(UsersInput);
            IsPrime(UsersInput);
            IsArmstrongNumber(UsersInput);
        }
        else if(UsersInput1 == 0)
        {
            cout << "Thank you! see you again.\n" << endl;
            return 0;
        }
        

    }
    
    
    
    return 0;   
}
