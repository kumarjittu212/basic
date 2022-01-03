//Write a program to find the largest of three numbers using ternary operators.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,n3,max;
    printf("enter a number:n1=");
    scanf("%d",&n1);
    printf("enter a number:n2=");
    scanf("%d",&n2);
    printf("enter a number:n3=");
    scanf("%d",&n3);
	max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
	printf("Largest number is %d.",max);
    getch();
}