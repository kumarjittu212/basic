/*Write a program to check number is Armstrong or not.
(Hint: A number is Armstrong if the sum of cubes of individual digits of a
number is equal to the number itself).*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int num, originalNum, remainder, result = 0;
        printf("Enter an integer: ");
        scanf("%d", &num);
        originalNum = num;
        while (originalNum != 0)
        {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }
        if (result == num)
            printf("%d is an Armstrong number.", num);
        else
            printf("%d is not an Armstrong number.", num);
        getch();
}