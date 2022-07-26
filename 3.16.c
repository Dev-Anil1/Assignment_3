int main()
{
    char c;
    printf("Enter Alphabet");
    scanf("%c",&c);
    if(c>='A' && c<='Z' )
        printf("UPPERCASE");
    else if(c>='a' && c<='z')
        printf("lowercase");
    else if(c>='0' && c<='9')
        printf("digit");
    else
        printf("Special character");
    getch();
    return(0);
}

