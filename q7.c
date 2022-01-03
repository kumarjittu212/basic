#include<stdio.h>
#include<conio.h>
void swap(int,int);
int main()
{
     int x,y;
     printf("enter a two number x and y:");
     scanf("%d %d",&x,&y);
     printf("\n value of x=%d and y= %d:",x,y);
     //with third variable
     int z;
     z=x;
     x=y;
     y=z;
     printf("\n (swap value with using third variable: x=%d y=%d)",x,y);
    printf("it's swap the orginal value of x and y");
     swap(x,y);
    return 0;
     getch();
}
void swap(int a,int b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
        printf("\n (swap value without using third variable: a=%d b=%d)",a,b);
        printf(" BUT it's not swap oraginal value of x and y: it's swap swaped value of x and y,");
    }