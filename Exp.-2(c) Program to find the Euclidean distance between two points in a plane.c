#include<stdio.h>
#include<math.h>
int main()
{
    int x1=10;
    int x2=50;
    int y1=10;
    int y2=35;
    float distance;
    printf("Distance between the lines is: ");
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%f", distance);
    return 0;
}