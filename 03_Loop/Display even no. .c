/*
Program:Display Even number
Author:Sambuddha Saha
Description:Enter 5 number and display only even number
*/
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter 5 number");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=4;i++)
    {
        if(a[i]%2==0)
        {
        printf("%d\n",a[i]);
        }
    }

}