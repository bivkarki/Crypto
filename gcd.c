/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int gcd(int,int);
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d",gcd(a,b));
}
int gcd(int a,int b)
{
  if (a==b)
  return a;
  else if (b==0)
  return a;
  else
  return gcd(b,a%b);
}
