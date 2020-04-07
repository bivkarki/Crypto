/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 char ch;
 char text[100];
 int shift=3;
 printf("enter text");
 gets(text);
 for(int i=0;text[i]!='\0';i++)
 {
     ch=text[i];
     if (ch>='a' && ch<='z')
      { ch=ch-shift;
        if (ch<'a')
        ch=ch+'z'-'a'+1;
        text[i]=ch;
      }
      else if (ch>='A' && ch<='Z')
      { ch=ch-shift;
        if (ch<'A')
        ch=ch+'Z'-'A'+1;
        text[i]=ch ; 
      }
      
      else
      {
      }
}
     printf("%s",text);
 }



