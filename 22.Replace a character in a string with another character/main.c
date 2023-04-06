#include <stdio.h>
#include <string.h> /* Used for strlen() function */

/* @brief: This function replaces a character in a string with another one.
*/
void replaceChar(char *string, char replace, char new)
{
    /* string length */
    int strLength = strlen(string);
    for(int i = 0; i < strLength; i++)
    {
        /* If a character in the original string equals the replace character */
        if(string[i] == replace)
        {
            /* Replace with the new character  */
            string[i] = new;
        }
        else
        {
            /* Do nothing */
        }
    }
}

int main()
{
    char string[] = "Hi, my name is Hussein Mohamed.";
    char replace = 'a';
    char new = 'x';
    printf("Original string: %s\n", string);
    replaceChar(string, replace, new);
    printf("Edited string: %s\n", string);
    return 0;
}