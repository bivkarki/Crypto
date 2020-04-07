/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
   long dec=0,digit,base=1,bin,i=0,num_1=0;
   printf("Enter the binary");
   scanf("%ld",&bin);
   while(bin>0)
   { 
     digit=bin%10;
     dec=dec+digit*pow(2,i);
     i++;
     bin/=10;
     
      
       
     
        
        
   }
   printf("%ld",dec);
}
