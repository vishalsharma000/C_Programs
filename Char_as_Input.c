int main(){

    char character;
    printf("Enter a character:");
    scanf(" %c", &character);

    if(character>='a' && character<='z')
    {
        printf("0\n");
    }
    else if(character>='A' && character<='Z')
    {
        printf("1\n");
    }
    else
    {
        printf("-1\n");
    }
}
