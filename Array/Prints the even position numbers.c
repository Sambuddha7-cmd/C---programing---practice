/*
Program: Print the even position number
Author: Sambuddha Saha
Description: This program prints the even position numbers from a given set of numbers
*/
#include<stdio.h>
int main(void)
{
     int i,n;
    printf("Enter the number of numbers you want to enter");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers");
      for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
    }
     for (i = 1; i <= n - 1; i= i+2)
     {
        printf("%d\n",a[i]);
     }
}
