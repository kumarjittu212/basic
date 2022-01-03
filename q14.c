/*Write a program to find the largest and smallest among three entered numbers and 
also display whether the identified largest/smallest number is even or odd.*/
#include<stdio.h>
#include<conio.h>
void numcheck(int x);
void main()
{
    int num1,num2,num3;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("num1=%d num2=%d num3=%d",num1,num2,num3);
    if(num1<num2 && num1<num3){
        printf("\n%d is the smallest",num1);numcheck(num1);
    }
    else if(num2<num3){
        printf("\n%d is the smallest",num2);numcheck(num2);
    }
    else{
        printf("\n%d is the smallest",num3);numcheck(num3);
    }
    if(num1>num2 && num1>num3){
        printf("\n%d is largest",num1);numcheck(num1);
    }
    else if(num2>num3){
        printf("\n%d is largest",num2);numcheck(num2);
    }
    else{
        printf("\n%d is largest",num3);numcheck(num3);
    }
    getch();
}
void numcheck(int x)
{
    if (x%2==0)
    {
        printf("number is even");
    }
    else
    printf("number is odd");
    
}