#include<stdio.h>
int main()
{
    int a;
    printf("Enter anumber : ");
    scanf("%d",&a);

    if(a>0)
        printf("%d Number is positive",a);
    if(a<0)
        printf("%d Number is negative",a);
    if(a==0)
        printf("zero",a);
    return 0;
}