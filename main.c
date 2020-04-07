/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
void check_add_X();
int main()
{
  char key[]="CRYPTOGRAPHY";
  char Pt1[]="GOODMORNING";
  char Pt2[]="GOODEVENING";
  char Pt3[]="GOODAFTERNOON";
  
  /*check_add_X(Pt1);
  printf("\n%s",Pt1);
  check_add_X(Pt2);
  printf("\n%s",Pt2);
  */
  check_add_X(Pt3);
 

    return 0;
}


void check_add_X(char *str)
{
  char varx[] ="X";
  char sub_str[2];
  for(int i =0;i<strlen(str);i=i+2)
  {
      sub_str[0]=str[i];
      sub_str[1]=str[i+1];
      printf("\n%s",sub_str);
      if(sub_str[0]==sub_str[1])
      {   
          printf("sfffs");
          strcat(str,varx);
      }
    
      
  }
  
  if((strlen(str)%2 ) != 0)
  {
      printf("dddd");
      strcat(str,varx);

  }

}

