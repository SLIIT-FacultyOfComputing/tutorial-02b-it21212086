
/*Exercise 1 - Calculations

Convert the C program given below which converts a length given in cm to inches to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.

e.g.

float data1;
int data2;
scanf("%f", &data1); --> std::cin >> data1;
scanf("%d", &data2); --> std::cin >> data2; 
You already know that printf() in C is std::cout in C++ e.g.

printf("Hello World") --> std::cout << "Hello World";
2.54cm = 1 inch
*/
/*This cod bellow will print the converts a legnth cm to inches*/

#include <iostream>//Input output header file
int main() //Function main begin the program execution
{
    //Declaration of variables 
    float cm, inches;
  
    std::cout<<"Enter in cm : ";//Programing user to Enter legnth in cm
    std::cin>>cm;//Input the legnth in cm

    inches = cm / 2.54;//Calculating the inches
  
    std::cout<<"Length in inches is "<<inches<<std::endl;//Display the legnth in inches
    return 0; //End of the main function
  
}  
