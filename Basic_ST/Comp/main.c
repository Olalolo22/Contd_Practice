#include <stdio.h>
#include "main.h"

/*
main - Entry, check the code

Description - A program that checks whether the character input is a lower or upper case letter
Return: Always 0
*/

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}

int _isupper(int c)
{
    if (c >= 65 && c <= 90)
{
    return (1);
}
return (0);
}