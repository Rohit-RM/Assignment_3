#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number  : ");
    scanf("%d",&a);

    if(a % 2)
    {
        printf("%d it is an odd number",a);
    }
    else
    {
        printf("%d it is an even number ",a);
    }

    return 0;
}