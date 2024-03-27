void main()
{
    int a,b,c;
    printf("Enter a Number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is Greater",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is Greater",b);
    }
    else
    {
        printf("%d is Greater",c);
    }
    getch();
}
