#include<stdio.h>
int main()
{
    int a,b,sum,sub,multi,remainder;

    printf("Enter two values\n");
    scanf("%d%d", &a, &b);
    
    sum=a+b;
    sub=a-b;
    multi=a*b;
    remainder=a%b;
    printf("The addition of two numbers is %d\nThe subtraction of two numbers is %d\nThe multiplication of two numbers is %d\nThe remainder of two numbers is %d\n", sum, sub, multi, remainder );
    
    return 0;
}