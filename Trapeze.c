#include <stdio.h>
#include <math.h>

int main()
{
    printf("          b          \n");
    printf("     ----------------\n");
    printf("    /                \\\n");
    printf(" c /                  \\ d\n");
    printf("  /                    \\\n");
    printf(" /                      \\\n");
    printf(" -------------------------\n");
    printf("            a             \n");
    double a,b,c,d;
    printf("Input a, b, c, d: ");
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    double P = a + b + c + d;
    double area = ((a+b)/(fabs(a-b))) * sqrt((P/2-a)*(P/2-b)*(P/2-a-c)*(P/2-a-d));
    printf("Perimeter: %lf\n", P);
    printf("Area: %lf\n", area);

    return 0;
}
