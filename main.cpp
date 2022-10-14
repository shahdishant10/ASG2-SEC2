/**
    CS 700 ASSIGNMENT 2 SECTION 2
    Name : DISHANT SHAH
    AUTHOR : DISHANT SHAH
    MAIN FILE
    DATE OF CREATION : 11/10/2022
    SUBMISSION DATE : 14/10/2022
**/

#include"header.h"       //Includes the header file to call the function in it.
#include"sin_cos.cpp"    //Includes the file to be tested.

int main()
{
    //Values exactly on the border line.
    verifying_cos_fun(90,0);            //verify_cos function is called from the header file.
    verifying_sin_fun(90,9999);         //verify_sin function is called from the header file.

    verifying_cos_fun(45,7071);         //verify_cos function is called from the header file.
    verifying_sin_fun(45,7071);         //verify_sin function is called from the header file.

    verifying_cos_fun(0,9999);          //verify_cos function is called from the header file.
    verifying_sin_fun(0,0);             //verify_sin function is called from the header file.

    verifying_cos_fun(180,-9999);       //verify_cos function is called from the header file.
    verifying_sin_fun(180,0);           //verify_sin function is called from the header file.

    //Values which are in the middle of the boundary.
    verifying_cos_fun(30,8660);         //verify_cos function is called from the header file.
    verifying_sin_fun(30,4999);         //verify_sin function is called from the header file.

    verifying_cos_fun(60,4999);         //verify_cos function is called from the header file.
    verifying_sin_fun(60,8660);         //verify_sin function is called from the header file.

    verifying_cos_fun(120, -4999);      //verify_cos function is called from the header file.
    verifying_sin_fun(120, 8660);       //verify_sin function is called from the header file.

    //Values which are near the boundary.
    verifying_cos_fun(-10,9849);        //verify_cos function is called from the header file.
    verifying_sin_fun(-10,1736);        //verify_sin function is called from the header file.

    verifying_cos_fun(190, -9849);             //verify_cos function is called from the header file.
    verifying_sin_fun(190, -1736);             //verify_sin function is called from the header file.
}
