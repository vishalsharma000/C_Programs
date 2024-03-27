bool isPrime(int n)
{
    if(n <= 1)
    {
        return false;
    }
    int c = 2;
    while(c*c <= n)
    {
        if(n%c == 0)
        {
            return false;
        }
        c++;
    }
    return true;
}

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    if (isPrime(number) == true)
    {
        printf("Prime");
    }
    else
    {
        printf("not prime");
    }
}
