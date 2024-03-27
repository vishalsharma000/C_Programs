//call by value

/*void amit(int y)
{
    printf("%d\n",y);
    y = 7;
    printf("%d\n",y);
}

void main()
{
    int z = 5;
    amit(z);
    printf("%d\n",z);
    getch();
}*/

/*void amit(int y)
{
    printf("%d\n",y);
    //*y = 7;
    //printf("%d\n",*y);
}

void main()
{
    int z = 5;
    amit(&z);
    printf("%d\n",z);
    getch();
}*/
//Call by reference
void amit(int *y)
{
    printf("%d\n",*y);
    *y = 7;
    printf("%d\n",*y);
}

void main()
{
    int z = 5;
    amit(&z);
    printf("%d\n",z);
    getch();
}
