/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int sum(int num);
int main()
{
    int num,result;
    printf("enter the number");
    scanf("%d",&num);
    result=sum(num);
    printf("%d",result);
    
 
}
int sum(int num)
{
    if (num!=0)
    return (num%10+sum(num/10));
    else
    return 0;
    
}