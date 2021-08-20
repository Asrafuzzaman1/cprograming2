#include<stdio.h>
int main()
{
    char answer;
    printf("are you hungry?.\n");
    printf("if you are hungry, you can press y for yes and if you are not hungry ,you can press n for no.");
    answer=getchar();
    if(answer=='y'||answer=='Y')
    {
        printf("eat food.");
    }
    else
    {
        printf("take you rest.");
    }




    return 0;
}
