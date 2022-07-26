int main()
{
    int a,b,c,d;
    printf("Enter three numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("roots are real and distinct");
    else if(d=0)
        printf("roots are real and equal");
    else
        printf("imiginary roots");
    return 0;
}
