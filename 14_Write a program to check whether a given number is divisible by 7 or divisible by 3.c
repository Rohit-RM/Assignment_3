#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    if(a%7 == 0)
        if(a%3 == 0)
            printf("%d is divisible by 7 or 3",a);
        else
            printf("%d it is divisible by 7 not divisible by 3",a);

    else
        if(a%3 == 0)
            printf("%d is divisible by 3 not divisible by 7",a);
            else
                printf("%d is not divisible by 7 or 3");

    return 0;
}