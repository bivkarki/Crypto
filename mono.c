/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{          char s[30],k[27],c[30];  
           int i, index;  
           printf("Enter plain text: ");  
           gets(s);  
           printf("\nEnter key with 26 character:");  
           for(i=0;i<26;i++)  
           {  
                printf("\n%c",i+97);  
                scanf("%c",&k[i]);
                printf("%c",k[i]);  
           }  
           for(i=0;i<strlen(s);i++)  
           {  
                index=s[i]-97;  
                c[i]=k[index];  
           }  
           printf("Your cipher text is:");  
           for(i=0;i<strlen(s);i++)  
           {  
               printf("%c",c[i]);  
           }  
            getch();  
}
 



