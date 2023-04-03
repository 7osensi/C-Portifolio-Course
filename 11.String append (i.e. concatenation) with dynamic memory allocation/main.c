#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> /* Convert lower case characters to upper case characters */

/* s1 : a b c d
        0 1 2 3 */
char *stringAppend(char *s1, char *s2)
{
    /* string 1 length + string 2 lenght + '\0' */
    char *s = calloc((strlen(s1) + strlen(s2) + 1), sizeof(char));
    for(int i = 0; i < strlen(s1); i++)
    {
        s[i] = s1[i];
    }
    for(int i = 0; i < strlen(s2) + 1; i++)
    {
        s[strlen(s1) + i] = s2[i];
    }
    return s;
}

int main()
{
    char s1[20];
    char s2[10];
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);
    char *s = stringAppend(s1, s2);
    printf("Appended string: %s\n", s);
    free(s);
    return 0;
}