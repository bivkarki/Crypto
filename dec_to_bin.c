/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   long dec,rem,base=1,bin=0,num_1=0;
   printf("Enter the decimal");
   scanf("%ld",&dec);
   while(dec>0)
   {
       rem=dec%2;
       if (rem==1)
       {
           num_1++; 
        }
        bin+=rem*base;
        dec=dec/2;
        base*=10;
        
        
   }
   printf("%ld",bin);
}
