#include<stdio.h>
int a=10;//here a is a global variable
int main()
{
    printf("inside the main function a=%d\n",a);
    display();
}
void display()
{
    printf("inside the dispaly function a=%d\n",a);

}
