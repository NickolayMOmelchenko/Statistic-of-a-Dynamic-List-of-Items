/*
 * Author: Mykola Omelchenko
 * Email: mmomelchen42@tntech.edu
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
 * This is the utility function that takes an integar n and
 * returns the summation of 1 to n using a loop.
 */
unsigned int Sum(unsigned int n)
{
    // Write your code here to get this function to work
    long long h = 0;
        for (int i = 0; n >= i; i++)
        {
            h = h + i;
            if (n == i)
            {
                cout << "The summation from 1 to " << n << " is: " << h << endl;
            }
            else
            continue;
        }
    cout << endl;
    return h;
}

/*
 * This is the utility function that takes an integar n and
 * returns the Factorial of n.
 */
unsigned long long Factorial(unsigned int n)
{
    unsigned long long h = 1;
        for (int i = 1; n >= i; i++)
        {
            h = h * i;
            if (n == i)
            {
                cout << "The factorial of " << n << " is: " << h << endl;
            }
        }
    cout << endl;
    return h;
}

/*
 * This is the utility function that takes an integar n and
 * displays the times table of n.
 */
void TimesTable(unsigned int n)
{
    long long h;
    cout << "The times table for " << n << " is as follows: \n";
    for (int i = 1; 10 >= i; i++)
    {
        h = n * i;
        cout << i << " * " << n << " = " << h << endl;
    }
    cout << endl;
}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for even number including zero) or
 * a false (for odd number).
 */
bool IsEven(unsigned int n)
{
    if(n % 2 != 0)
        cout << n << " is an odd number. " << endl;
    else
        cout << n << " is an even number. " << endl;
    cout << endl;
    return n;
}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for a prime number) or
 * a false (for a non-prime number).
 */
bool IsPrime(unsigned int n)
{
    int flag = 0;
    for(int i = 2; i <= n/2; i++)  
    {  
        if(n % i == 0)  
        {  
            cout << n << " is NOT a prime number." <<endl;  
            flag = 1;  
            break;  
        }  
    }  
    if (flag == 0) 
    { 
        cout << n << " is a prime number." <<endl; 
    }
    cout << endl;
    return n;
}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for an Armstrong Number) or
 * a false (for a Non-Armstrong Number).
 */
bool IsArmstrongNumber(unsigned int n)
{
    bool IsArmstrongNumber = true;
    string astr = to_string(n);
    int m = n, sum = 0, remainder;
    while (m != 0)
    {
        remainder = m % 10;
        sum += pow(remainder, astr.size());
        m = m / 10;
    }
    if(sum == n)  
    {  
        cout << n << " is an Armstrong number.";
    }
    else
    {    
        cout << n << " is NOT an Armstrong number.";      
    }
    return IsArmstrongNumber;
}