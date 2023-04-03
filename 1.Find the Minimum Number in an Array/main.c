#include <stdio.h>
#include <stdlib.h>

void findMin(int arr[])
{
    int min = arr[0];
    for(int i = 1; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
printf("Min number = %d \n", min);
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
        findMin(arr);
        free(arr);
    }
return 0;
}