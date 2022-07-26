int main()
{
    int a,b;
    printf("Enter a number = ");
    scanf("%d",&a);
    b=a/10;
    b=b*10;
    b=a-b;
    if(b==0 | b==2 | b==4 | b==6 | b==8)
        printf("Even");
    else
        printf("Odd");
    getch();
    return 0;
}
