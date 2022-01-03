//write a program to calculate simple(si) and compound interest(ci)(si=p*r*t/100, ci)
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float si,ci,p,r,t;
    printf("Enter principal amount:");
	 scanf("%f", &p);
	 printf("Enter time in year:");
	 scanf("%f", &t);
	 printf("Enter rate in percent:");
	 scanf("%f", &r);
	 si = (p * t * r)/100;
	 ci = p * (pow(1+r/100, t) - 1);
	 printf("Simple Interest = %f\n", si);
	 printf("Compound Interest = %f", ci);
	 getch();
}