#include<stdio.h>
int main()
{
    char alp;
    scanf("%c", &alp);
    if (alp=='a' || alp=='e'|| alp=='i'|| alp=='o' || alp=='u')
    {
        printf("Alphabet is Vowel");                //Write a program to check the given character is vowel or consonant
    }
    else
    {
        printf("Alphabet is Consonant");
    }
    return 0;
}