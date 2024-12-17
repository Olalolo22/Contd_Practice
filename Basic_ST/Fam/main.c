#include <stdio.h>
#include "main.h"

/*
main - Entry point
Description -  A program that collects the ages of members of families and determines the average age of the family

Return : Always (0) Success
*/

int main(void)
{
    int Dad, Mum, Me, Sis, Bro;

    printf("How old is your father?\n");
    scanf("%i", &Dad);

    printf("How old is your Mother?\n");
    scanf("%i", &Mum);

    printf("How old are you?\n");
    scanf("%i", &Me);

    printf("Your Sister?\n");
    scanf("%i", &Sis);

    printf("Your brother?\n");
    scanf("%i", &Bro);

    int Total = sum(Dad, Mum, Me, Sis, Bro);
    printf("Total age is %d\n",Total);

   printf("Average age of your family is  %d\n",average(Total, 5));


    return 0;
}
















int sum(int Dad, int Mum, int Me, int Sis, int Bro)
{
    return (Dad + Mum + Me + Sis + Bro);
}

int average(int sum, int numofpep)
{
    return (sum/numofpep);
}