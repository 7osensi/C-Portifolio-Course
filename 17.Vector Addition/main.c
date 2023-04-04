#include <stdio.h>
#include <stdlib.h> /* Dynamic memory allocation */
#include <string.h>
#include <time.h>
#include <ctype.h> /* Convert lower case characters to upper case characters */ /* Check if character is upper of lower */

void vectorAdd(float v1[], float v2[], float result[], int length)
{
    for(int i = 0; i < length; i++)
    {
        result[i] = v1[i] + v2[i];
    }
}

int main()
{
    float v1[] = {2, 5, 4};
    float v2[] = {3, 2, 1};
    float result[] = {0, 0, 0};
    vectorAdd(v1, v2, result, 3);
    for(int i = 0; i < 3; i++)
    {
        printf("\nresult[%d] = %0.2f\n", i, result[i]);
    }
    return 0;
}