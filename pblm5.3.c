#include<stdio.h>
#include<math.h>
#define Accuracy 0.0001
int main()
{
    int n,count;
    float x,term,sum;
    printf("enter the value of x:");
    scanf("%f",&x);
    n=term=sum=count=1;
    while(n<=100)
    {
        term=term*(x/n);
        sum=sum+term;
        count=count+1;
        if(term<Accuracy)
        {
            n=999;
        }
        else
            n=n+1;
    }
    printf("term=%d  sum=%f \n",count,sum);
}
