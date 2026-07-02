 /*
Program: Reversing a number 
Author: Sambuddha
Description:
User enters a number and the program reverses it .
*/
#include <stdio.h>
int main (void)
{
int  temp, reverse=0,digit;
printf("Enter the number you want to reverse :");
scanf("%d",&temp);
while(temp>0)
{
    digit=temp%10;  
    reverse=reverse*10+digit;
   temp=temp/10;  
}
 printf("%d",reverse);
return 0;
}
