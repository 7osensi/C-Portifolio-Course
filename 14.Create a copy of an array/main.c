#include <stdio.h>
#include <stdlib.h> /* Dynamic memory allocation */
#include <string.h>
#include <time.h>
#include <ctype.h> /* Convert lower case characters to upper case characters */ /* Check if character is upper of lower */

int *arrayCopy(int *arr, int length)
{
    int *cloneArr = malloc(length * sizeof(int));
    for(int i = 0; i < length; i++)
    {  
        cloneArr[i] = arr[i]; 
    }
    return cloneArr;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};                                   /* Length = 5 */
    int arr2[] = {99, 50, 30, 70, 80, 90, 100, 50};                 /* Length = 8 */

    printf("\nOriginal array1:\n\n");

    for(int i = 0; i < 5; i++)
    {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }

    printf("\nOriginal array2:\n\n");

    for(int i = 0; i < 8; i++)
    {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    int *arr1Copy = arrayCopy(arr1, 5);
    int *arr2Copy = arrayCopy(arr2, 8);

    printf("\nClone1:\n\n");
    for(int i = 0; i < 5; i++)
    {
        printf("arr1Copy[%d] = %d\n", i, arr1Copy[i]);
    }

    printf("\nClone2:\n\n");
    for(int i = 0; i < 4; i++)
    {
        printf("arr2Copy[%d] = %d\n", i, arr2Copy[i]);
    }
    return 0;
}