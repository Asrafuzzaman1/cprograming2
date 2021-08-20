//determine the greatest number between two number
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the value of num1 and num2.");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("the greatest number is =%d\n",num1);
    }
    else if(num2>num1)
    {
        printf("the greatest number is =%d\n",num2);
    }
    else
    {
        printf("the two number is equal.%d=%d",num1,num2);
    }



    return 0;
}
