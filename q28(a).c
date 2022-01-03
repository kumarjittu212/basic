/*28- Write programs to display each of the following patter.
(28) A= * * * * *
        * * * *
        * * *
        * *
        *  */
#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
        int i, j;
        for (i = 5; i >= 1; --i)
        {
                for (j = 1;j <= i; ++j)
                {
                        printf("* ");
                }
                printf("\n");
        }
        return 0;
}