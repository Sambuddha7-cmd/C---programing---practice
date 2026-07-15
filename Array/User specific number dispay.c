/*
Program: Enter 10 numbers and display them.
Author: Sambuddha Saha
Description: Enter 10 numbers and display them using an array
*/
#include <stdio.h>

int main(void)
{
    int a[10], i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The numbers you entered are:\n");
    for (i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}