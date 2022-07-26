int main()
{
    int a;
    printf("Enter value");
    scanf("%d",&a);
    if(a%2==0 && a%3==0)
        printf("Divisible");
    else
        printf("Non-divisible");
    getch();
    return 0;
}
