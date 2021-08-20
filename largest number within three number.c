#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a , b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("the a is the largest number=%d.",a);

        }
        else
        {
            printf("the largest number is c=%d",c);
        }
    }
    else
    {
        if(b>c)
        {
        printf("the largest number is b =%d",b);
        }
        else
        {
            printf("the largest number is c=%d",c);
        }
    }
}
