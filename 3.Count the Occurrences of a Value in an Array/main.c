#include <stdio.h>
#include <stdlib.h>

void occurances(int arr[], int arrSize, int num)
{
    int occur = 0;
    for(int i = 0; i < arrSize; i++)
    {
        if(arr[i] == num)
        {
            occur++;
        }
    }
printf("Number of occurences = %d \n", occur);
}

int main()
{
    int arrSize = 0;
    int *arr;
    int num = 0;
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
        printf("Enter the number you want to check its number of occurences : \n");
        scanf("%d", &num);
        occurances(arr, arrSize, num);
        free(arr);
    }
return 0;
}