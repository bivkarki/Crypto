/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>  
#include<string.h>  
 
int main()  
{  
      char plaintext[20], key_value[20], cipher_text[20];  
      int i, j = 0;  
      printf("\nEnter Plain-Text to Encrypt:\t");  
      scanf("%[^\n]s", plaintext);  
      fflush(stdin);
      printf("\nEnter key value:\t");  
      scanf("%[^\n]s", key_value);  
      for(i = 0; i < strlen(plaintext); i++)  
      {  
            cipher_text[i] = plaintext[i] + (key_value[j] - 97);  
            j = j + 1;  
            if(j == strlen(key_value))  
            {  
                  j = 0;  
            }  
      }  
      printf("\nPolyalphabetic Cipher Text:\t%s", cipher_text);  
      return 0;
}
 



