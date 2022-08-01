#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);

    if(a>='a' && a<='z')
    {
        printf("%c is lowercase",a);
    }
    if(a>='A' && a<='Z')
    {
        printf("%c is Uppercase",a);
    }

    return 0;
}