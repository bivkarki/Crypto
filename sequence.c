/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int row = 4,col=3;
    int n=0;
    int a[row][col];
    for(int j=0;j<col;j++)
    {
        for(int i=0;i<row;i++)
        {   
            n++;
            a[i][j]=n;
        }
    }
    for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
