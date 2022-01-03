//write a program to input two number and display the maximum number.
#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     printf("enter a number of a=");
     scanf("%d",&a);
     printf("enter a number of b=");
     scanf("%d",&b);
    if (a>b)
        printf("a is maximum number",a);
    else
    printf("b is maximum number=%d",b);
    getch();
}