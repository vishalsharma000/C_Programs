main()
{
    int x,y,z;
    printf("Enter two number");
    scanf("%d%d",&x,&y);
    //z = x;
    //x = y;
    //y = z;
    z = x - y;
    y = x - y;
    x = x + y;
    printf("Swap number is:%d\n%d",x,y);
    getch();
}
