#include <stdio.h>
int main()
{
    float r;
    printf("Enter the radius of circle\n");
    scanf("%f", &r);
    float pi = 3.14;
    float a = pi * r * r;
    printf("Area of circle is %f\n", a);
    float g = 2 * 3.14 * r;
    printf("Perimeter of circle is %f\n", g);
    // Area and perimeter of circle^

    float q;
    printf("Enter the side of square\n");
    scanf("%f", &q);
    float c = q * q;
    printf("Area of square is %f\n", c);
    float d = 4 * q;
    printf("Perimeter of square is %f\n", d);
    // Area and perimeter of square^

    float l, b;
    printf("Enter the side of rectangle\n");
    scanf("%f%f", &l, &b);
    float h = l * b;
    printf("Area of rectangle is %lf\n", h);
    float j = 2 * (l + b);
    printf("Perimeter of rectangle is %2f\n", j);
    // Area and perimeter of rectangle^

    return 0;
}