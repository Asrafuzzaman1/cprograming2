#include<stdio.h>
int main()
{
    char answer;
    printf("would you like to know my name?\n");
    printf("Type y for yes and N for no  :");
    answer=getchar();
    if(answer=='Y'||answer=='y')
    {
        printf("\n my name is ASRAFUZZAMAN");
    }
    else
    {
        printf("you are good for nothing");
    }







    return 0;
}
