#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks of your subject.");
    scanf("%d",&marks);
    if(marks>100||marks<0)
    {
        printf("this marks is invalid.");
    }
    else if(marks>=80&&marks<=100)
    {
        printf("you have obtained A+.");
    }
    else if(marks>=70&&marks<=79)
    {
        printf("you have obtained A.");
    }
    else if(marks>=60&&marks<=69)
    {
        printf("you have obtained A-.");
    }
    else if(marks>=50&&marks<=59)
    {
        printf("you have obtained B.");
    }
    else if(marks>=40&&marks<=49)
    {
        printf("you have obtained C.");
    }
    else if(marks>=33&&marks<=39)
    {
        printf("you have obtained D.");
    }
    else
    {
        printf("you have obtained F.");
    }




    return 0;
}
