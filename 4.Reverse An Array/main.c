#include <stdio.h>
#include <stdlib.h>

void reverseArray(int arr[], int length)
{
    int j = length - 1;
    for(int i = 0; i < (length / 2); i++)
    {
        arr[i] ^= arr[j];
        arr[j] ^= arr[i];
        arr[i] ^= arr[j];
        j--;
    }
}

int main()
{
    int arrSize = 0;
    int *arr;
    printf("Enter array size: ");
    scanf("%d", &arrSize);
    printf("Entered number of elements: %d\n", arrSize);
    arr = (int*)malloc(arrSize * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else 
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
        printf("Enter array elements : \n");
        for(int i = 0; i < arrSize; ++i)
        {
            scanf("%d", arr + i);
        }
        printf("Array before reversing:\n");
        for(int i = 0; i < arrSize; ++i)
        {
            printf("arr[%d] = %d\n", i, *(arr + i));
        }
        reverseArray(arr, arrSize);
                
        printf("Array after reversing:\n");
        for(int i = 0; i < arrSize; ++i)
        {
            printf("arr[%d] = %d\n", i, *(arr + i));
        }
        free(arr);
    }
return 0;
}