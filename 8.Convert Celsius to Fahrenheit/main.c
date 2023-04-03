#include <stdio.h>
#include <stdlib.h>

void ConvertCelsiusFahrenheit(double start, double end, double step)
{
    double TempC = 0;
    double TempF = 0;
    printf("C           F\n");
    for(TempC = start; TempC <= end; TempC += step)
    {
        TempF = ((TempC * 1.8) + 32);
        printf("%-8.2lf %8.2lf\n", TempC, TempF);
    }
}

int main()
{
    double start = 0;
    double end = 0;
    double step = 0;
    /* Enter start temp */
    printf("Enter start C temp: ");
    scanf("%lf", &start);
    /* Enter end C temp */
    printf("Enter end C temp: ");
    scanf("%lf", &end);
    /* Enter step */
    printf("Enter step value: ");
    scanf("%lf", &step);
    ConvertCelsiusFahrenheit(start, end, step);
    return 0;
}