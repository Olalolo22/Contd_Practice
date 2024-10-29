#include <stdio.h>

int _isupper(int c)
{
    // Check if uppercase or not

    // option1- Use ASCII VALUES
    // ASCII for UPPERCASE = 65 - 90
    //   convrt evry char given to the ASCII
    // compare it to the 65 - 90 and if it does, return 1, if not return 0

if (c >= 65 && c <= 90)
{
    return (1);
}
return (0);


    //    OPTION 2:    compare 'A - Z'
    // convert alphabets to 'A -Z'
    // compare to see whether it falls withn the 'A - Z'
    // if yes, return 1, otherwise return 0


/*if (c >= 'A' && c <= 'Z')
{
    return (1);
}
return (0);
} */