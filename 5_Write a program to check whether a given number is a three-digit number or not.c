#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    if((a >= 100) && (a <= 999))
    {
        printf("It is an three digit number");
    }
    else
    {
        printf("It is not a three digit number");
    }

    return 0;
}