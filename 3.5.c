int main()
{
    int a,b;
    printf("Enter three digit number = ");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    b=a%10;
    a=a/10;
    b=a%10;
    a=a/10;
    if(a==0 && b>0)
        printf("Number is of three digit");
    else
        printf("Number is not Of three digit");
    getch();
    return 0;
}
