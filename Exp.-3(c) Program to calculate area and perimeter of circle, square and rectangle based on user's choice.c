#include<stdio.h>
int main()
 {
    int choice;
    float radius, side, length, width;
    float area, perimeter;
    printf("Choose a shape to calculate area and perimeter:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1/2/3):");
    scanf("%f", &choice);
    
    if (choice==1)
    {
        printf("Enter the radius of the circle:");
        scanf("%f", &radius);
        area=3.14*radius*radius;
        perimeter=2*3.14*radius;
    }
    else if (choice==2)
    {
        printf("Enter the side of square:");
        

    }
    


 }