#include<stdio.h>
int main(void)
{
    int  original ,remainder,sum_of_cubes, temp;
    printf("Armstrong numbers between 1 and 1000 are: \n");
  
   original=0; 
   while (original<=1000)
   {
    original+=1;
    temp=original;
    while (temp!=0)
    { remainder=temp%10;
        sum_of_cubes+=remainder*remainder*remainder;
        temp/=10;    
    }
   if(original==sum_of_cubes)
   printf("%d ",original);
    sum_of_cubes=0;
   }
}