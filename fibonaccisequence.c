#include<stdio.h>
int main(void)
{  
    int a=0, b=1,c=0;
    printf("The Fibonacci sequence upto 100 : ");
    printf("The Fibonacci sequence upto 100 : %d %d ",  a,b);
    while(c<80)
    {
  c=a+b;
    a=b;
    b=c;
    printf("%d",c);   
    printf("\n");
    }
  
}
