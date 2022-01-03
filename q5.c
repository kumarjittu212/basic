#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b;
    float x;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    x=a+b;
    printf("\n sum of two number:%f",x);
    x=a-b;
    printf("\n sub of two numberr:%f",x);
    x=a/b;
    printf("\n div of two number:%f",x);
    x=a*b;
    printf("\n multi of two number:%f",x);
    getch();
}