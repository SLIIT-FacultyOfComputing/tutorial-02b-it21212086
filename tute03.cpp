//This c program is will print calculates the Factorial of a number that user input from the keyboard
#include <iostream> //Input output header file
int main() //Function main begin the program execution 
{

   //Declaration of variables 
    int no;
    long fac;

    std::cout<<"Enter a Number : ";//Programing user to Enter a Number from the keybord
    std::cin>>no;//Input the no

    fac = 1;
    for (int r=no; r >= 1; r--)//for loop
      std::cout<<r<<endl;
      {
        fac = fac * r;// calculates the Factorial of a number
    }

    std::cout<<"Factorial of "<< no<<is<<fac<<std::endl;
  
    return 0;//End of the main function
}
