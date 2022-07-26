int main()
{
    char c;
    printf("Enter Alphabet");
    scanf("%c",&c);
    if(c>='A' && c<='Z' )
        printf("UPPERCASE");
    else if(c>='a' && c<='z')
        printf("lowercase");
    getch();
    return(0);
}
