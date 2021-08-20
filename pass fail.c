#include<stdio.h>
int main()
{

    int marks;
    printf("enter the marks of your subject.");
    scanf("%d",&marks);
    if(marks>=33)
    {
        printf("you have passed this subject");
    }
    else
    {
        printf("you have failed this subject.");
    }



    return 0;
}
