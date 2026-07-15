/*
Program:Largest among user defied numbers
Author:Sambuddha Saha
Description:User enters user specific number of digits. Then the user enter the value of the digits. Then the program finds the largest
*/
#include <stdio.h>
int main(void)
{
    int i, m, n;
    printf("Enter the number of digits among which you want to find the largest:");
    scanf("%d", &n);
    int a[n];
    printf("While entering the digits please use space between every digit\nEnter the digits:");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    m = a[0];
    for (i = 0; i <= n - 1; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
    }
    printf("The lagest number among the entered number is :%d", m);
}