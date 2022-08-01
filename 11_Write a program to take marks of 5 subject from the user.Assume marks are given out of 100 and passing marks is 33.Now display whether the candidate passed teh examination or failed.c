#include<stdio.h>
int main()
{
    int eng,mat,mar,phy,che;
    printf("Enter a five subject marks : ");
    scanf("%d %d %d %d %d",&eng,&mat,&mar,&phy,&che);

    if(eng&&mat&&mar&&phy&&che > 35)
        printf("You are passed");
    else
        printf("You are Fail");
}