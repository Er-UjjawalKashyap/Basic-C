#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter for numbers(after every number press enter)");
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    if(a>b&&c>d)
    {
        if(a>c)
        printf("%d is Largest number",a);
        else printf("%d is Largest number",c);
    }
    if(a>b&&c<d)
    {
        if(a>d)
        printf("%d is Largest number",a);
        else printf("%d is Largest number",d);
    }
    if(a<b&&c>d)
    {
        if(b>c)
        printf("%d is Largest number",b);
        else printf("%d is Largest number",c);
    }
    if(a<b&&c<d)
    {
        if(b>d)
        printf("%d is Largest number",b);
        else printf("%d is Largest number",d);
    }
    return(0);

}