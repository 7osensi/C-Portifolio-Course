#include <stdio.h>
#include <stdlib.h> /* Use dynamic memory allocation */
#include <stdbool.h> /* Use true/false */

int main()
{
    int size = 2;
    int *buffer = malloc(size * sizeof(int));

    int input = 0; /* Variable stores the user's input */
    int numData = 0; /* Variable to keep track of the current position of the buffer */
    
    while (true)
    {
        /* If size variable is reached */
        if(numData == size)
        {
            /* Double the size variable */
            size *= 2;
            /* Reallocate memory for the buffer with double the previus size */
            buffer = realloc(buffer, sizeof(int) * size);
        }
        /* Take input from the user (enter '-1' to quit the loop) */
        printf("Enter (-1 to quit)\n");
        scanf("%d", &input);
        /* Quit the loop if the user enters '-1' */
        if(input == -1)
        {
            break;
        }
        else
        {
            buffer[numData] = input; /* Store the input from the user in the buffer */
            numData++; /* Increase the number of data by '1' */
        }
    }

    int total = 0; /* Variable to store the total */
    for(int i = 0; i < numData; i++)
    {
        total += buffer[i]; /* Accumulate total variable with the buffer */
    }
    printf("\nAverage: %d\n", total / numData); /* Print the average by dividing the total variable by the number of data in the buffer */
    printf("\nnumData: %d\n", numData); /* Print the number of data in the buffer */
    printf("\nBuffer size: %d\n", size); /* Print the size of the buffer */
    return 0;
}