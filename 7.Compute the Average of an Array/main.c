#include <stdio.h>
#include <stdlib.h>

void averageArray(int arr[], int arrSize)
{
    int sum = arr[0];
    for(int i = 1; i < arrSize; i++)
    {
        sum += arr[i];
    }
printf("Average of the array = %d\n", (sum / arrSize));
}

int main()
{
    int arrSize = 0;
    int *arr;
    printf("Enter array size: ");
    scanf("%d", &arrSize);
    printf("\nEntered number of elements: %d", arrSize);
    arr = (int*)malloc(arrSize * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else 
    {
        printf("\nMemory successfully allocated using malloc.\n");
        printf("Enter array elements :\n");
        for(int i = 0; i < arrSize; ++i)
        {
            scanf("%d", arr + i);
        }
        averageArray(arr, arrSize);
        free(arr);
    }
return 0;
}