#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/* L1L 9L4 */
bool isPostalCode(char postalCode[])
{
    /* Postal code should be 7 characters */
    if(strlen(postalCode) != 7)
    {
        return false;
    }
    /* First character should be alphabet */
    if(!isalpha(postalCode[0]))
    {
        return false;
    }
    /* Second character should be number */
    if(!isdigit(postalCode[1]))
    {
        return false;
    }
    /* Third character should be alphabet */
    if(!isalpha(postalCode[2]))
    {
        return false;
    }
    /* Fourth character should be space */
    if(postalCode[3] != ' ')
    {
        return false;
    }
    /* Fifth character should be number */
    if(!isdigit(postalCode[4]))
    {
        return false;
    }
    /* Sixth character should be alphabet */
    if(!isalpha(postalCode[5]))
    {
        return false;
    }
    /* Seventh character should be number */
    if(!isdigit(postalCode[6]))
    {
        return false;
    }
    return true;
}

int main()
{
    char code1[] = "L8K 4B6";

    if(isPostalCode(code1))
    {
        printf("\n%s is a postal code.\n", code1);
    }
    else
    {
        printf("\n%s is not a postal code.\n", code1);
    }
    return 0;
}