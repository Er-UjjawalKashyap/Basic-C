#include<stdio.h>
int main()
{
    unsigned long long m;
    int n=0;
    printf("Enter a Number ");
    scanf("%llu",&m);
    while(m!=0)
    {
        n++;
        m/=10;
    }
    printf("Digits in given number is %d",n);
    return(0);
}