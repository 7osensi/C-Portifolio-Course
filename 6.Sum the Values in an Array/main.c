#include <stdio.h>
#include <stdlib.h>

void sumArray(int arr[], int arrSize)
{
    int sum = arr[0];
    for(int i = 1; i < arrSize; i++)
    {
        sum += arr[i];
    }
printf("NSum = %d \n", sum);
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
        sumArray(arr, arrSize);
        free(arr);
    }
return 0;
}