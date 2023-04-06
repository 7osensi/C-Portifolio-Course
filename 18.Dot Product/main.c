#include <stdio.h>
#include <stdlib.h> /* Dynamic memory allocation */
#include <string.h>
#include <time.h>
#include <ctype.h> /* Convert lower case characters to upper case characters */ /* Check if character is upper of lower */

float dotProduct(float arr1[], float arr2[], float length)
{
    float sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += (arr1[i] * arr2[i]);
    }
    return sum;
}

int main()
{
    float arr1[] = {2, 5, 4};
    float arr2[] = {3, 2, 1}; 
    float dotProd = 0;                
    dotProd = dotProduct(arr1, arr2, 3);
    printf("Dot product result = %0.2f\n", dotProd); 
    return 0;
}