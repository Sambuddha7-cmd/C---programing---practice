 /*
Program: Palindrome.c
Author: Sambuddha
Description:
Checks whether a number is palindrome . 
*/
#include <stdio.h>
int main(void)
{
    int num, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

 
}
