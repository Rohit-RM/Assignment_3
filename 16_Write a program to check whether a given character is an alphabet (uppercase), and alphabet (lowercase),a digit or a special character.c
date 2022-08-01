#include<stdio.h>
int main()
{
    int a;
    printf("Enter a character : ");
    scanf("%c",&a);

    if(a>='a' && a<='z')
        printf("%c Is a lowercase",a);
    else if(a>='A' && a<='Z')
        printf("%c Is a uppercase",a);
    else if(a>='0' && a<='9')
        printf("%c It is a digit",a);
    else
        printf("%c Is a special character",a);
}