#include <stdio.h>
#include "main.h"

/*
main - Entry point
Description -  A program that collects the ages of members of families and determines the average age of the family

Return : Always (0) Success
*/

int main(void)
{
    int Dad, Mum, Me, Sis1, Sis2; //Bro1, Bro2//;
    int DOO;

    printf("How old is your father?\n");
    scanf("%d", &Dad);

    printf("How old is your Mother?\n");
    scanf("%d", &Mum);

    printf("How old are you?\n");
    scanf("%d", &Me);

    printf("Do you have any siblings?\n");
    scanf("%d", &DOO);
    if (DOO == 1)
    {
        printf("How old is your sister?\n");
        scanf("%d", &Sis1);

       int Total = sum(Dad, Mum, Me, Sis1, Sis2);
        printf("Total age is %d\n",Total);
        printf("Average age of your family is %d\n",average(Total, 4));
    }
    else
    {
        printf("Lets move on then\n");

        int Total = sum(Dad, Mum, Me, Sis1, Sis2);
     printf("Total age is %d\n",Total);

     printf("Average age of your family is  %d\n",average(Total, 3));
    }

/*int Total = sum(Dad, Mum, Me, Sis1, Sis2);
    printf("Total age is %d\n",Total);

   printf("Average age of your family is  %d\n",average(Total, 3));  */

    return 0;
}

int sum(int Dad, int Mum, int Me, int Sis1, int Sis2)
{
    return (Dad + Mum + Me + Sis1 + Sis2);
}

int average(int sum, int numofpep)
{
    return (sum/numofpep);
}