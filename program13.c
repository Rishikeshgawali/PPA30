//Program to Display 5 times Hello

#include<stdio.h>

// Demonstration of SEQUENCE

void Display()      // Defination
{
   int iCnt=0;
   
   // 1 Intialization
   // 2 Condition
   // 3 Displacement
   // 4 Loop Body
   
   //    1       2      3
   for(iCnt=1;iCnt<=5;iCnt++)
   {
	   printf("Hello\n");     //4
   }
   
}

//1
//2 4 3
//2 4 3
//2 4 3
//2 4 3
//2 4 3
//2

int main()
{
   Display();       // Function call
   
   return 0;
}