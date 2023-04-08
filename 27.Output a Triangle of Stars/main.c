#include <stdio.h>

// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
// **********
void triangleOfStars(int rows, int columns)
{
    /* Outer loop for the rows */
    for(int i = 1; i <= rows; i++)
    {
        /* Outer loop for the columns */
        for(int j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}

int main()
{
    int rows = 0;
    int columns = 0;
    printf("Enter rows and columns:");
    scanf("%d %d", &rows, &columns);
    triangleOfStars(rows, columns);

    return 0;
}