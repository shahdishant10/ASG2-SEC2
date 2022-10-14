/**
    CS 700 ASSIGNMENT 2 SECTION 2
    Name : DISHANT SHAH
    AUTHOR : DISHANT SHAH
    HEADER FILE
    DATE OF CREATION : 11/10/2022
    SUBMISSION DATE : 14/10/2022
**/

#include<iostream> //includes the input/output streams for printing in the console
using namespace std;

void verifying_cos_fun(int,int);  //Declaring the cos function which will verify.
void verifying_sin_fun(int,int);  //Declaring the sin function which will verify.
int sin(int);              //Declaring the cos function to be verified.
int cos(int);              //Declaring the sin function to be verified.

/**
    @brief It verifies that the given value is same as expected or different.
    @param variable1 to compute cos() function and  variable2 the expected value.
    @return no return type.
    @author DISHANT SHAH
**/
void verifying_cos_fun(int z,int expect)
{
    int real = cos(z);
    cout << "cos[" << z << "] is " << real << ", expected  " << expect;
    if(real == expect)
    {
        cout << ": ---PASS---" << endl;
    }
    else
    {
        cout << ": ***FAIL***" << endl;
    }
}

/**
    @brief It verifies that the given value is same as expected or different.
    @param variable1 to compute sin() function and  variable2 the expected value.
    @return no return type.
    @author DISHANT SHAH
**/
void verifying_sin_fun(int z,int expect)
{
    int real = sin(z);
    cout << "sin[" << z << "] is " << real << ", expected  " << expect;
    if(real == expect)
    {
        cout << ": ---PASS---" << endl;
    }
    else
    {
        cout << ": ***FAIL***" << endl;
    }
}



