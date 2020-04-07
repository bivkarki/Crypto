/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    for ( int i =1; i<=5;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d ",i);
        }
        for(int k=10;k>0;k=k-2)
        {
            printf("_ ");
        }
        for(int m=0;m<i;m++)
        {  
            printf("%d ",i);
        }
        printf("\n");
    }
    

    return 0;
}
