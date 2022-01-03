// Write a program to find the factorial of a number.
#include <stdio.h>
#include <conio.h>
void main()
{
    int x, n, i;
    i=1;
    printf("Enter a number to find factorial: ");
    scanf("%d", &n);
        for (x = 1; x <= n; x++)
        {
            i= i*x;
            printf("*%d",x);
        }
          printf("\nFactorial is=%d",i);
    getch();
    }