#include <stdio.h>
#include <stdlib.h>

void findMax(int arr[], int arrSize)
{
    int max = arr[0];
    for(int i = 1; i < arrSize; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
printf("Max number = %d \n", max);
}

int main()
{
    int arrSize;
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
        findMax(arr, arrSize);
        free(arr);
    }
return 0;
}