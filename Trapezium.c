/*
 * C Program for Find Area of Trapezium
 */
#include <stdio.h>
 
int main()
{
    float a, b, h;
    float area;
 
    printf("Enter the value for two bases and height of the trapezium: \n");
    scanf("%f%f%f", &a, &b, &h);
    area = 0.5 * (a + b) * h ;
    printf("Area of the trapezium is: %.3f", area);
    return 0;
}
