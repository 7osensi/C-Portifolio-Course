#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int converBinarytoDecimal(char *string)
{
    int decimal = 0;
    int mult = 1;
    int strLength = strlen(string);
    for(int i = (strLength - 1); i >= 0; i--)
    {
        if(string[i] == '1')
        {
            decimal += mult;
        }
        mult *= 2;
    }
    return decimal;
}

int main()
{
    char string[] = "10101010";
    int decimal = 0;
    printf("Binary: %s\n", string);
    decimal = converBinarytoDecimal(string);
    printf("Decimal: %d\n", decimal);
    return 0;
}