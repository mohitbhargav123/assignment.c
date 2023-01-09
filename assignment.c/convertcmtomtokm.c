#include <stdio.h>

int main()
{
    float cm, meter, km;


    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    meter = cm / 10000.0;
    km    = cm / 10000000.0;

    printf("Length in Meter = %f m \n", meter);
    printf("Length in Kilometer = %f km", km);

    return 0;
}
