
/*This cod bellow will print the calculates an employee's salary and display netSalary */.
  
#include<iostream> //Input output header file
int main() //Function main begin the program execution 
{

    //Declaration of variables 
   double salary, netSalary;
   int etype, otHrs, otRate;
  
   std::cout<<"Enter Employee Type : ";//Programing user to Enter Employee Type
   std::cin>>etype;//Input the type of Employee
  
   std::cout<<"Enter Salary  : "; //Programing user to enter Salary
   std::cin>>Salary; //Input the salary
  
   std::cout<<"Enter OtHrs : "; //Programing user to Enter OtHrs
   std::cin>>OtHrs; //Input the OtHrs
   
   switch (etype)//Use the switch statement to select one of many code blocks to be executed.
     {
      case 1 :
          otRate = 1000
          break;
      case 2 :
          otRate = 1500
          break;

      default :
          otRate = 1700
          break;
   }


   netSalary = salary + otHrs* otRate; //Calculating the NetSalary
   std::cout<<"Net Salary is "<<netSalary//Display the Netsalary
  
   return 0; //End of the main function
}






