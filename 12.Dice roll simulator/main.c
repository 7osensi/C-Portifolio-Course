#include <stdio.h>
#include <stdlib.h> /* to call function called rim */
#include <string.h>
#include <time.h>
#include <ctype.h> /* Convert lower case characters to upper case characters */



int main()
{
    srand(time(NULL)); /* give srand a random time */

    int dice = 10;
    int roll = 0;

    for(int i = 1 ; i <= dice; i++)
    {
        /* rand() produces a random number from 0 to RAND_MAX(0x7FFF) */
        roll = rand() % 6 + 1;
        printf("Dice %d: %d\n", i, roll);
    }
    return 0;
}