/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/
// This is a program to calculate the function called nCr which is defined as
#include <iostream>//Input output header file

long Factorial(int no);
long nCr(int n, int r);

int main()//Function main begin the program execution 
{
  int n, r;
  std::cout << "Enter a value for n ";//Programing user to Enter a Number from the keybord
  std::cin >> n;//Input the no
  std::cout << "Enter a value for r ";//Programing user to Enter a Number from the keybord
  std::cin >> r;;//Input the no
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
  long Factorial(int no){
    int fac = 1;
    for(int x=no;x>=1;x--){
      fac= fac * x;
    }
    return fac;
  }
   long nCr(int n,int r){
     long nCr = Fctorial(n)/(factorial?(r)*factorial(n-r));
     return nCr;
   }