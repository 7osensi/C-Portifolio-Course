#include <stdio.h>
#include <stdlib.h> /* Dynamic memory allocation */
#include <string.h>
#include <stdbool.h>


int wordCount(char *str, char *word)
{
    int strLength = strlen(str);
    int wordLength = strlen(word);
    int wordOccur = 0;
    int letterCounter = 0;
    int end = (strLength - wordLength) + 1;
    for(int i = 0; i < end; i++)
    {
        for(int j = 0; j < wordLength; j++)
        {
            if(str[i + j] != word[j])
            {
                letterCounter = 0;
                break;
            }
            else if(str[i + j] == word[j])
            {
                letterCounter++;
            }
            if(letterCounter == wordLength)
            {
                wordOccur++;
            }
        }
    }
    return wordOccur;
}

int main()
{
    char str[] = "Hate Love Hate Love Hate Love Love";
    char word[] = "Love";
    int occur = 0;
    occur = wordCount(str, word);
    printf("Love occurences: %d\n", occur);
    return 0;
}