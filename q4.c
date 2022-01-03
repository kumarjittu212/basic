//WAP TO CALCULATE AREA AND CIRCUMFRENCE OF A CIRCLE(area = 3.14*r*r)(C OF circle=2*3.14*r)
#include<stdio.h>
#include<conio.h>
void main()
{
    int r;
    float coc, area;
    printf("enter a radius:");
    scanf("%d",&r);
    coc=2*3.14*r;
    printf("circumfrence of a circle: %f",coc);
    area=3.14*r*r;
    printf("\n calculate area: %f",area);

   getch();
}