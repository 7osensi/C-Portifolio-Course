#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkPalindrome(char str[], int strlength)
{
    int j = strlength - 1;
    char *originalStr = (char*)malloc(strlength * sizeof(char));
    strcpy(originalStr, str);  
    for(int i = 0; i < (strlength / 2); i++)
    {
        str[i] ^= str[j];
        str[j] ^= str[i];
        str[i] ^= str[j];
        j--;
    }
    if(strcmp(originalStr, str) == 0)
    {
        printf("\n%s is palindrome\n", originalStr);
    }
    else
    {
        printf("\n%s is not palindrome\n", originalStr);
    }
}

int main()
{
    char *str;
    int strSize = 0;
    printf("Enter string size: ");
    scanf("%d", &strSize);
    str = (char *)malloc(strSize * sizeof(char));
    if (str == NULL) 
    {
        printf("\nMemory not allocated.");
        exit(0);
    }
    else 
    {
        printf("Memory successfully allocated using malloc.");
        printf("\nEnter a string: ");
        fflush(stdin);
        gets(str);
        printf("You entered %s", str);
        checkPalindrome(str, strlen(str));
        free(str);
    }
return 0;
}