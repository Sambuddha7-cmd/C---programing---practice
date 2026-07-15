/*
Program:Sum of user specific number of digits
Author:Sambuddha Saha
Description:User enters user specific number of digits and the  program finds the sum
*/
#include <stdio.h>
int main(void)
{
    int n, sum = 0;
    printf("Please enter the number of digits whose sum you wnat to find out:");
    scanf("%d", &n);
    int a[n], i;
    printf("Enter the digits whose sum u want to find:\n While Entering the digits please user space between each digit");

    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= n - 1; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum of the numbers:%d", sum);
}