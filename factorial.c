#include<stdio.h>
int main()
{
    double i,fact=1,n;
    printf("enter any positive number.");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("fact=%.1lf",fact);





    return 0;
}
