#include <stdio.h>
#include <math.h>

int main()
{
    int n, firstDigit, lastDigit, digits;

    printf("Enter any number: ");
    scanf("%d", &n);


    lastDigit = n % 10;     


    digits = (int)log10(n); 


    firstDigit = (int)(n / pow(10, digits)); 

    printf("First digit = %d\n", firstDigit);
    printf("Last digit = %d\n", lastDigit);

    return 0;
}
