#include <stdio.h>
int main()                                  
{
    int c=1;  //Code to find Factorial 
    int a=5;
    
    for (int i=1; i<a; i++)
    {   
        c=c*i;
        printf("%d\n", c);
    }
}