#include<stdio.h>
int main()
{
    int o=0;
    unsigned long long n=0,l,p;
    printf("Enter the number ");
    scanf("%llu",&p);
    l=p;
    while(p!=0)
    {
        o=p%10;
        n=n*10+o;
        p/=10;
    }
    printf("%llu  %llu   ",l,n);
    if(l==n) printf("Given number is palindrome number\n");
    else printf("Given number is not a palindrome number\n");
    return (0);
}