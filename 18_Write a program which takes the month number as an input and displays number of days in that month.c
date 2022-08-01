#include<stdio.h>
int main()
{
    int month;
    printf("Enter a month : ");
    scanf("%d",&month);
    if(month==1)
        printf("In january has 31 days");
    else if(month==2)
        printf("In February has 28 days");
    else if(month==3)
        printf("In March has 31 days");
    else if(month==4)
        printf("In April has 30 days");
    else if(month==5)
        printf("In May has 31 days");
    else if(month==6)
        printf("In June has 30 days");
    else if(month==7)
        printf("In July has 31 days");
    else if(month==8)
        printf("In August has 31 days");
    else if(month==9)
        printf("In September has 30 days");
    else if(month==10)
        printf("In October has 31 days");
    else if(month==11)
        printf("In November has 30 days");
    else if(month==12)
        printf("In December has 31 days");
    else
        printf("Enter a valid month number...");
}