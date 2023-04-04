#include <stdio.h>
#include <stdlib.h> /* Dynamic memory allocation */
#include <string.h>
#include <time.h>
#include <ctype.h> /* Convert lower case characters to upper case characters */ /* Check if character is upper of lower */

void checkLeap(int year)
{
    if(year % 4 != 0)
    {
        printf("%d is not a leap year.\n", year);
    }
    else if(year % 100 != 0)
    {
        printf("%d is leap year.\n", year);
    }
    else if(year % 400 != 0)
    {
        printf("%d is not a leap year.\n", year);
    }
    else
    {
        printf("%d is leap year.\n", year);
    }
}

int main()
{
    unsigned int year = 0;
    printf("Enter a year: ");
    scanf("%d", &year);
    checkLeap(year);
    return 0;
}