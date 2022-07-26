int main()
{
    int a,b,c;
    printf("Enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
        printf("Valid");
    else
        printf("Invalid");
    getch();
    return 0;
}
