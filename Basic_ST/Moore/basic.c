#include <stdio.h>
#include "functions.h"

/*
main - Entry point
Description - A program that teaches basics of Functions and inclusion in the main file

Return: Always (0) success
*/

int main (void)
{
    // 

    // studentA
    // test1 = 78
    // test2 = 90
    // call function
    int studentA = sum(78, 90);

    printf("StudentA scored a total of %d \n", studentA);
    printf("StudentA had an average score of %d \n", average(studentA, 2));



    return 0;
}
// defining functions
int sum(int test1, int test2)
{
    return (test1 + test2);
}

int average(int sum, int numoftest)
{
    // A = sum
    // B = numoftest

    return (sum/numoftest);
}