#include <stdio.h>
#include <string.h>

void removeCharacter(char *s, char letter)
{
    int strSize = strlen(s);
    for(int i = 0; i < strSize; i++)
    {
        if(s[i] == letter)
        {
            for(int j = i; j < strSize; j++)
            {
                s[j] ^= s[j + 1];
                s[j + 1] ^= s[j];
                s[j] ^= s[j + 1];
            }
        }
    }
}

int main()
{
    char s[] = "abacad adssca dsx cw w dcsasad";
    char letter = 'a';
    printf("Before removing char %c from string: %s\n", letter, s);
    removeCharacter(s, letter);
    printf("After removing char %c from string: %s\n", letter, s);
    return 0;
}