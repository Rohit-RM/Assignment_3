#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a length of the sides of a traingle : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a + b > c && b + c > a && a + c > b)
        printf("Traingle is valid");
    else
        printf("Traingle is not valid");

        return 0;
}