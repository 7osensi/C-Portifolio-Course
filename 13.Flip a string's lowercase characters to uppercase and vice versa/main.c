#include <stdio.h>
#include <stdlib.h> /* to call function called rim */
#include <string.h>
#include <time.h>
#include <ctype.h> /* Convert lower case characters to upper case characters */ /* Check if character is upper of lower */

void letterFlip(char *s)
{
    for(int i = 0; i < strlen(s); i++)
    {
        if(isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        else if(islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }
}

int main()
{
    char s[] = "abcdABCD";
    printf("Before flipping: %s\n", s);
    letterFlip(s);
    printf("After  flipping: %s\n", s);
    return 0;
}