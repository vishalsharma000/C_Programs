#include<string.h>
#include<stdio.h>

string ConvertaToBinary(int n)
{
    int res = " ";
    while(n != 1)
    {
        if(n%2 == 1)
        {
            res +='1';
        }
        else
        {
            res +='0';
        }
        n = n / 2;
    }
    reverse(res);
    return res;
}

main()
{
    int number;
    printf("Enter a Number:");
    scanf("%d",&number);

     string res = ConvertToBinary(number);
     printf("%ld",res);
}
