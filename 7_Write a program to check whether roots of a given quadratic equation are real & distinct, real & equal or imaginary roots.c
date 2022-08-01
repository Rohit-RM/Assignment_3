#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float e,f;
    printf("Enter a number : ");
    scanf("%d %d %d",&a,&b,&c);

    int d = ((b * b) - (4 * a * c));

    if( d > 0)
    {
       e =  (-b + (sqrt(d))) / (2 * a);
       f =  (-b - (sqrt(d))) / (2 * a);
        printf(" The roots %f or %f are real and distinct",e,f);

    }
    else if(d == 0)
    {
        e = -b / 2 * a;
        printf("%f The roots are real and equal",e);
    }
    else if(d < 0)
    {
        printf("%d The roots are imaginary roots",d);
    }
}