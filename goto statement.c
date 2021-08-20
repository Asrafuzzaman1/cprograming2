#include<stdio.h>
int main()
{
    int n=1,sum=0;
    loop:
        sum=sum+n*n;
        if(n==4)
            goto print;//forward jump
        else
        {
            n=n+1;
            goto loop;//backward jump
        }
        print:
            printf("the sum is =%d",sum);




    return 0;
}
