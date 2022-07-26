int main()
{
    int a;
    printf("Enter a number to check=");
    scanf("%d",&a);
    if(a>0)
        printf("Positive");
    else if (a==0)
        printf("Zero");
    else
        printf("Negative");
    getch();
    return(0);
}
