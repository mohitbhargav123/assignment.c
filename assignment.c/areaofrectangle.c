#include<stdio.h>

int main()
{
    float length,breadth;
    float area;

    printf(" Enter the Length of a Rectangle : ");
    scanf("%f",&length);

    printf(" Enter the Breadth of a Rectangle : ");
    scanf("%f",&breadth);

    area = length * breadth;

    printf(" Area of Rectangle is : %f",area);
    return 0;
}
