#include<stdio.h>
/*
int a=10;//here a is a global variable*/
int main()
{
    int a=10;//local variable
    printf("inside the main function a=%d\n",a);
    display();
}
void display()
{
    int b=12;//local variable
    printf("inside the dispaly function b=%d\n",b);

}
