// Write a program to count number of digits in a given integer.
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    int count = 0;
    printf("Enter a number");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("The number of digits in an integer is : %d", count);
    getch();
}