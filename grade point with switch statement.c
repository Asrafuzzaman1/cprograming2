#include<stdio.h>
int main()
{
    int marks,index;
    char grade;
    printf("enter marks.");
    scanf("%d",marks);
    index=(marks/10);
    switch(index)
    {
    case 10:
    case 9:
    case 8:
        grade = "honours";
        break;
    case 7:
    case 6:
    grade=first devision";
        break;
    case 5:
        grade = "second devision";
        break;
    case 4:
        grade="third devision";
        break;
    default:
        grade=fail;
        break;
    }

printf("%s\n",grade);

    return 0;
}
