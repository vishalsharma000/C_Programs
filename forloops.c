/*void main()
{
    int i;
    for(i=0; i<=5; i++)
    {
        printf("A");
        printf("B\n");
    }
    getch();
}*/

/*void main()
{
    int i,j;
    for(i=0; i<3; i++)
    {
        printf("A");
        for(j=0; j<4; j++)
        {
            printf("B");
        }
    }
    getch();
}*/

void main()
{
    int i,j,c=0;
    for(i=-2; i>-8; i--)
    {
        printf("A");
        for(j=-7; j<1; j++)
        {
            printf("B");
            c++;
        }
    }
    printf("%d",c);
    getch();

}
