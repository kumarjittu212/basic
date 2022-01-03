/*Write a program to check whether the entered year is leap year or not (a year is 
leap if it is divisible by 4 and divisible by 100 or 400.)*/
#include<stdio.h>
#include<conio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}