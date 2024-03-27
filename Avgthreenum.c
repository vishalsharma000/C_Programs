main()
{
    int x,y,z,sum;
    float avg;
    printf("Enter a Numbers");
    scanf("%d%d%d",&x,&y,&z);
    sum = x + y + z;
    avg = sum/3.0;
    printf("Average of three number is:%f",avg);
    getch();
}
