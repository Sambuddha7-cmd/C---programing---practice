 /*
Program: Armstrong number 
Author: Sambuddha
Description:
Checks whether a number is armstrong number.
*/
#include<stdio.h>
int main(void)
{ 
    int original , remainder, sum_of_cubes= 0, temp;
    printf("Enter an number: ");
    scanf("%d", &original);
    temp = original;
    while (temp != 0) {
        remainder = temp % 10;
        sum_of_cubes +=  remainder * remainder * remainder;
        temp /= 10;
    }
    if (original == sum_of_cubes)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);
}
