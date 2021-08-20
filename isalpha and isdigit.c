#include<stdio.h>
#include<ctype.h>
int main()
{
    char character;
    printf("enter any character: ");
    character=getchar();
    if(isalpha(character)>0)//test for letter
        printf("the character is a letter .");
    else
        if(isdigit(character)>0)
        printf("the character is a digit.");
    else
        printf("the character is a special character.");









    return 0;
}
