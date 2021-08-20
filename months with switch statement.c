#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of months.");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("january.");
        break;
    case 2:
        printf("february.");
        break;
    case 3:
        printf("march.");
        break;
    case 4:
        printf("april.");
        break;
    case 5:
        printf("may.");
        break;
    case 6:
        printf("june.");
        break;
    case 7:
        printf("julay");
        break;
    case 8:
        printf("agust.");
        break;
    case 9:
        printf("september.");
        break;
    case 10:
        printf("october.");
        break;
    case 11:
        printf("november.");
        break;
    case 12:
        printf("december.");
        break;
    default:
        printf("this value is not valide.");
    }






    return 0;
}
