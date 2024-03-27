/*add()
{
    int a,b,c;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    c = a+b;
    printf("Addition is: %d",c);
}

main()
{
    add();
    getch();
}*/

/*add(int a, int b)
{
    int c;
    c = a + b;
    printf("Addition is: %d",c);
}
main()
{
    int x = 2, y = 7;
    add(x,y);

    getch();
}*/

/*add(int a,int b)//formal arguments , funtion definition
{
    int c;
    c = a+b;
    printf("Addition is:%d",c);
}

main()
{
    int x,y;
    printf("Enter 2 numbers:");
    scanf("%d%d",&x,&y);

    add(x,y) //actual arguments, function calling
    getch();
}*/


int add(int a,int b)//formal arguments , funtion definition
{
    int c;
    c = a+b;
    return c;
}

main()
{
    int x,y,p;
    printf("Enter 2 numbers:");
    scanf("%d%d",&x,&y);

    p = add(x,y);//actual arguments, function calling
    printf("Addition is: %d",p);
    getch();
}
