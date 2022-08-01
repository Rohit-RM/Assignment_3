#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a two number : ");
    scanf("%d %d",&a,&b);

    if(a>b)
        printf("%d is greater",a);
    else if(a==b)
        printf("%d both are same",a);
    else
        printf("%d is greater",b);
    return 0;
    
}