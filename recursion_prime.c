/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int prime (int, int);
int
main ()
{
  int num, check;
  printf ("enter the number");
  scanf ("%d", &num);
  check = prime (num, num / 2);
  if (check == 1)
    printf ("Prime number");
  else
    printf ("Not Prime");


}

int
prime (int num, int i)
{
  if (i == 1)
    return 1;
  else
    {
      if (num % i == 0)
	return 0;
      else
	return prime (num, i - 1);
    }



}
