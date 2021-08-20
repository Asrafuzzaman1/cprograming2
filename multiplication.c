
int mul(int a, int b, int c);
int main()
{
    int a,b,c,multiplication,;
    printf("enter the value of a, b and c: ");

    scanf("%d%d%d",&a,&b,&c);
    multiplication=mul(a,b,c);
    printf("multiplication is =%d",multiplication);

    return 0;

}
