#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the value of x :");
    scanf("%d",&x);
    printf("%d\n",x++);//x

    printf("%d\n",x);//x+1
    printf("%d\n",++x);//x+2
    printf("%d\n",x);//x+2
    printf("%d\n",x--);//x+2
    printf("%d\n",x);//x+2-1
    printf("%d\n",--x);//x+2-2
    printf("%d\n",x);//x+2-2



    return 0;
}
