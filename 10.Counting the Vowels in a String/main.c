#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> /* Convert lower case characters to upper case characters */

int vowel_count(char *str)
{
    int counter = 0;
    int stringCounter = 0;
    for(counter = 0; counter < strlen(str); counter++)
    {
        switch (toupper(str[counter]))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            stringCounter++;
        }
    }
    return stringCounter;
}

int main()
{
    char s1[1000];
    printf("Enter a string\n");
    gets(s1);
    int s1VowelsCount = vowel_count(s1);
    printf("s1 vowels count: %d\n", s1VowelsCount);
    return 0;
}