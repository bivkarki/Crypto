#include <stdio.h>
void swap(float *ptr1,float *ptr2);
int main()
{
    float m,n;
    printf("Enter the values of M and N");
    scanf("%f %f",&m,&n);
    printf("After swapping:%5.2f and %5.2f",m,n);
    return 0;
}
void swap(float *ptr1,float *ptr2)
{   
    float temp;
    temp=*ptr2;
    *ptr2=*ptr1;
    *ptr1=temp;
}
