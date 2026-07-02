#include<stdio.h>

int main(void)
{
    int sum = 0, digit, temp, original;

    printf("Enter a number: ");
    scanf("%d", &original);

    temp = original;
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    printf("The sum of extracted digits is %d\n", sum);
    return 0;
}
