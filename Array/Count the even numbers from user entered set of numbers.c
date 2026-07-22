/*
Program: Count the number of even numbers from the user given numbers
Author: Sambuddha Saha
Description: This program counts the number of even numbers from the user given numbers
*/ 
#include<stdio.h>
int main(void)
{
    int i,c=0,n;
    printf("Enter the number of numbers you want to enter");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<=n-1;i++)
        {
            if(a[i]%2==0)
            {
                c=c+1;
            }
            
        }
        printf("The number of even numbers are:%d",c);
    
}