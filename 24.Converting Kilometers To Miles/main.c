#include <stdio.h>

double convertKmToMiles(double km)
{
    return km * 0.62137;
}

double convertKmToNauticalMiles(double km)
{
    return km * 0.539957;
}

int main()
{
    double startKM = 0; /* KM start value */
    double endKM = 0;   /* KM end value */
    double stepKM = 0;  /* KM step value */
    

    /* startKm variable validation */
    /* Make sure it's a positive value */
    /* Stuck in while until get a non-negative value from the user */
    do{
        printf("Enter start KM value: ");
        scanf("%lf", &startKM);
        if(startKM < 0)
        {
            printf("Error! Enter + statKM value:\n");
        }
    }while(startKM < 0);

    /* stepKm variable validation */
    /* Make sure it's a positive value */
    /* Stuck in while until get + value from the user */
    do{
        printf("Enter step KM value: ");
        scanf("%lf", &stepKM);
        if(stepKM <= 0)
        {
            printf("Error! Enter + stepKM value:\n");
        }
    }while(stepKM <= 0);

    /* endKm variable validation */
    /* Make sure it's a positive value */
    /* Stuck in while until get + value from the user */
    do{
        printf("Enter end KM value: ");
        scanf("%lf", &endKM);
        if(endKM <= 0)
        {
            printf("Error! Enter + endKM value:\n");
        }
    }while(endKM <= 0);

    printf("\nStart KM : %0.0lf\n", startKM);   /* Print start KM value */
    printf("\nStep KM  : %0.0lf\n", stepKM);    /* Print step KM value */
    printf("\nEnd KM   : %0.0lf\n", endKM);     /* Print end KM value */

    double currentKM = 0;  /* KM current value */
    printf("\n\n");
    /* Make 3 columns with width 20 for each one */
    printf("%-20s%-20s%-20s\n", "Kilometers", "Miles", "Nautical");
    printf("**************************************************\n");

    for(currentKM = startKM; currentKM < endKM; currentKM += stepKM)
    {
        /* Output a floating point number in a 20 width column left a line with 4 digits of accuracy */
        printf("%-20.4f%-20.4f%-20.4f\n", currentKM, convertKmToMiles(currentKM), convertKmToNauticalMiles(currentKM));
    }
    printf("\n");
    return 0;
}