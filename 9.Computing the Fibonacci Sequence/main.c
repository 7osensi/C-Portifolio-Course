#include <stdio.h>
#include <stdlib.h>

void iterativeFibonacciSequence(int length)
{
    int counter = 0;
    int term1 = 0;
    int term2 = 1;
    int fibn = 0;
    printf("%d,%d,", term1, term2);
    for(counter = 2; counter < length; counter++)
    {
        fibn = term1 + term2;
        printf("%d", fibn);
        term1 = term2;
        term2 = fibn;
        if(counter != length - 1)
        {
            printf(",");
        }
        else
        {
            printf("\n");
        }
    }
}

int recursiveFibonacciSequence(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return recursiveFibonacciSequence(n - 1) + recursiveFibonacciSequence(n - 2);
    }
}

int main()
{
    int length= 0;
    /* Enter the length */
    do
    {
        printf("Enter the sequence length: ");
        scanf("%d", &length);
        if(length < 3)
        {
            printf("Error! length is less than three.\n");

        }
        else
        {
            /* Do nothing */
        }
    } while (length < 3);
    printf("Iterative solution\n");
    iterativeFibonacciSequence(length);
    printf("Recursive solution\n");
    for(int i = 0; i < length; i++)
    {
        printf("%d", recursiveFibonacciSequence(i));
        if(i != length - 1)
        {
            printf(",");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}