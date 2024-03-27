void main()
{
    int x,y;
    printf("Enter 2 Number:");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("%d is greater",x);
    }
    else if(y>x)
    {
        printf("%d is greater",y);
    }
    else
    {
        printf("Both are equal");
    }
    getch();
}
